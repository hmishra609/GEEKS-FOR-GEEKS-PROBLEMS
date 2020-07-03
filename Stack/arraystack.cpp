#include<bits/stdc++.h>

using namespace  std;
struct stacks
{
    int *arr;
    int cap;
    int top;
    stacks(int c)
    {
     cap=c;
     top=-1;
     arr=new int[c];
    }
    void push(int d)
    {
    if(top>=cap-1)
    {
        cout<<"Overflow";
        return;
    }
    else
    {
    arr[++top]=d;
    }
    }

    int pop()
    {
        int a;
    if(top==-1)
    {
        cout<<"underflow";
        return -1;
    }
    else
        {
        a=arr[top--];
        return a;
        }

    }

    void print()
    {
        if (top==-1)
        {
        cout<<"Stack is empty";
        }
        int temp=top;
    while(temp!=-1)
    {
    cout<<arr[temp]<<endl;
    temp--;
    }
    }
};


int main()
{
 stacks *s=new stacks(6);
 s->push(1);
 s->push(2);
s->pop();
s->pop();
s->pop();


s->print();
//cout<<a;
}
