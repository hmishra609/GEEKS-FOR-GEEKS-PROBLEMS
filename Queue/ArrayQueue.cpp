#include<bits/stdc++.h>

using namespace std;

struct Queue
{
int cap,Front,Rear;
int *arr;

Queue(int c)
{
Front=Rear=0;
cap=c;
arr=new int[cap];
}

void push(int x)
{
if(cap==Rear)
{
    cout<<"Queue is Full";
    return;
}
else
    {
arr[Rear]=x;
Rear++;
return;
    }
}

void pop()
{
if(Front==Rear){
    cout<<"Queue is empty";
    return;
                }

else
    {


    }
}
};
