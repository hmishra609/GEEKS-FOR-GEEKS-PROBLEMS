#include<bits/stdc++.h>

using namespace std;

struct node
{
  int data;
  node *next;

  node(int c)
  {
   data=c;
   next=NULL;
  }
};

struct linkedlistStack
{
    node *head; //Also called as Top in this case.
    linkedlistStack()
    {
     head=NULL;
    }

   void push(int a)
    {
       node *temp=head;
       node *p=new node(a);
       if(temp==NULL)
       {
        head=p;
        head->next=NULL;
       }
       else
        {
            head=p;
            head->next=temp;
        }
    }


    int pop()
    {
     node *temp=head;
     if(temp==NULL)
     {
      cout<<"Underflow\n";
      return -1;
     }
     else
        {
        head=head->next;
        int a=temp->data;
        free(temp);
        return a;
        }
    }
int peek()
    {
     node *temp=head;
     if(temp==NULL)
     {
      cout<<"Underflow\n";
      return -1;
     }
     else
        {
        int a=head->data;
        return a;
        }
    }

    void print()
    {
        node *temp=head;
        if(temp==NULL)
         {
          cout<<"Stack is empty\n";
         }
        else
        {
                while(temp)
                {
                 cout<<temp->data<<"\n";
                 temp=temp->next;
                }

        }

    }
};

int main()
{
linkedlistStack s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);

s.pop();
s.pop();
cout<<"Top Value is "<<s.peek()<<"\n";
s.print();

}
