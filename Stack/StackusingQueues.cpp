///method 1
#include<bits/stdc++.h>

using namespace std;

class Stack
{
int cur_size;
queue <int> q1,q2;
public:

    Stack()
    {
     cur_size=0;
    }

void push(int x)
{
 cur_size++;
///add element to q2
q2.push(x);
///add all elements from q1 to q2
while(!q1.empty())
{
q2.push(q1.front());
q1.pop();
}

///swap name of q1 & q2


auto i=q1;
q1=q2;
q2=i;
}

void pop()
{

if(q1.empty())
{
    cout<<"Stack is empty";
    return;
}
else
    {
        cur_size--;
        q1.pop();

    }
}

int top()
{
  if(q1.empty())
    return -1;

  return q1.front();
}

int Stacksize()
{
 return cur_size;
}
};

int main()
{
Stack s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);

cout<<"Current size is "<<s.Stacksize()<<"\n";
cout<<s.top()<<"\n";
s.pop();
cout<<s.top()<<"\n";
s.pop();
cout<<s.top()<<"\n";
s.pop();

cout<<"Current size is "<<s.Stacksize()<<"\n";
}
