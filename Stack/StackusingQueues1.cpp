
///method 2
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
    q1.push(x);
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
    while(q1.size()!=1)
    {

  q2.push(q1.front());
  q1.pop();

    }
q1.pop();
cur_size--;


///swapping queues
auto i=q1;
    q1=q2;
    q2=i;

    }
}

int top()
{
  if(q1.empty())
    return -1;
while(q1.size()!=1)
{
q2.push(q1.front());
q1.pop();
}

    int temp=q1.front();
    ///to empty the  q1 for making it ready for operations
    q1.pop();

    q2.push(temp);


///swapping queues
    auto i=q1;
    q1=q2;
    q2=i;
return temp;
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
