
#include<bits/stdc++.h>
using namespace std;

struct node
{
    node* next;
    int data;
    node(int d)
    {
     next=NULL;
     data=d;
    }
};

struct LinkedListQueue
{
node *Front;
node *Rear;

LinkedListQueue()
{
Front=Rear=NULL;
}

void push(int x)
    {
        node *temp=new node(x);

        if(Rear==NULL)
        {
        Front=Rear=temp;
        return;
        }

        Rear->next=temp;
        Rear=Rear->next;

    }
void pop()
{
  if(Front==NULL)
        return;

 node *temp=Front;
 Front=Front->next;

 if(Front==NULL)
    Rear=NULL;
 delete(temp);
}

int Front_()
{
  if(Front==NULL)
        return -1;

 node *temp=Front;
 Front=Front->next;

 if(Front==NULL)
    Rear=NULL;
 return (temp->data);
}

};

int main()
{
    LinkedListQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q.pop();
    cout<<q.Front_();

}
