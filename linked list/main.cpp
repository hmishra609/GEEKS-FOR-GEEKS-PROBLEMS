#include<bits/stdc++.h>
using namespace std;

struct node
{
   int data;
   node *next;
   node(int x)
   {
    data=x;
    next=NULL;
   }
};
node *head;
struct linked_list
{


    linked_list()
    {
        head=NULL;
    }
   void insert_front(int x)
   {
    node *temp=new node(x);
    temp->next=head;
    head=temp;
   }
   void insert_back(int x)
   {
    node *temp=head;
    while(temp->next)
    {
     temp=temp->next;
    }
    temp->next=new node(x);
    temp->next->next=NULL;
   }

    void insert_at(int x,int pos)
    {
            node *temp=head;
            for(int i=0;i<pos-2;i++)
                {
                     temp=temp->next;
                }
                node *n=new node(x);
                n->next=temp->next;
                temp->next=n;

    }
   void print()
   {
       node *temp=head;
       while(temp)
       {
           cout<<temp->data<<" ";
           temp=temp->next;
       }
   }

void nth_from_back(int n)
{
node *fast=head;
node *slow=head;
int j=n;

if(fast!=NULL)
    {

while(n)
{
fast=fast->next;
n--;
}

while(fast!=NULL)
{
    slow=slow->next;
    fast=fast->next;
}

cout<<"the value of index "<<j<<" is "<<slow->data;
}
}
   void print_mid()
   {
    node *slow=head;
    node *fast=head;
    if(fast!=NULL)
    {
    while(fast!=NULL&&fast->next!=NULL)
    {
    slow=slow->next;
    fast=fast->next->next;
    }
    cout<<"the mid element of linked list is:"<<(slow->data);
    }

   }


//prev---curr----nxt
   void reverse_iterative()
   {
    node *curr=head;
    node *nxt;
    node *prev=NULL;
    while(curr!=NULL)
    {
     nxt=curr->next;
     curr->next=prev;
     prev=curr;
     curr=nxt;
    }
    head=prev;
   }

    void reverse_recursive(node *curr,node *prev)
    {
        if(curr==NULL)
        {
            return;
        }
        if(curr->next==NULL)
        {
        head=curr;
        curr->next=prev;
        return;
        }
        node *nxt=curr->next;
        curr->next=prev;
        reverse_recursive(nxt,curr);
    }
    int isloop()
    {
     node *slow=head;
     node *fast=head;
     while(fast&&fast->next)
     {
      slow=slow->next;
      fast=fast->next->next;
     if(slow==fast)
     {
        cout<<"Loop found";
        return 1;
     }
     }
     cout<<"No Loop found";
     return 0;

    }

    int detect_remove_loop()
    {
             node *slow=head;
             node *fast=head;
             while(fast&&fast->next)
             {
              slow=slow->next;
              fast=fast->next->next;
             if(slow==fast)
             {
            removeloop(slow);
            return 1;
             }
             }
             return 0;

    }
void removeloop(node *s)

{
    node *ptr1=s;
    node *ptr2=s;

   int k=0;
    while(ptr1->next!=ptr2)
    {
        ptr1=ptr1->next;
        k++;
    }
    ptr1=head;

    while(ptr1!=ptr2)
    {
     ptr1=ptr1->next;
     ptr2=ptr2->next;
    }

    while(ptr2->next!=ptr1)
            ptr2=ptr2->next;


    ptr2->next=NULL;
}

    void hashAndRemove()
    {
     unordered_map <node*,int> node_map;
     node *temp=head;
     node *last=NULL;
     while(temp!=NULL)
     {

             if(node_map.find(temp)==node_map.end())
             {
             node_map[temp];
             last=temp;
             temp=temp->next;
             }

            else
            {
            last->next=NULL;
            break;
            }
     }

    }



    void pair_data_swap()
    {
        node *temp=head;

        while(temp!=NULL&&temp->next!=NULL)
        {
           swap(temp->data,temp->next->data);
           temp=temp->next->next;
        }

    }



    void pairwise_node_swap()
    {
    node *p=head;
    head=p->next;
node *q;
node *temp;

     while(1)
     {
        q=p->next;
        temp=q->next;

        q->next=p;
        if(temp==NULL||temp->next==NULL)
        {
               p->next=temp;
               break;
        }
        p->next=temp->next;
        p=temp;
     }

    }
    void create_loop()
    {
     node *temp=head;
     while(temp->next)
     {
         temp=temp->next;
     }
     temp->next=head;
    }
};
int main()
{
    linked_list l;
    l.insert_front(1);
    l.insert_back(2);
l.insert_back(3);
l.insert_back(4);
l.insert_back(5);
l.insert_back(6);
l.insert_back(7);
    l.print();

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
//l.create_loop();


    //if(l.detect_remove_loop())
    //cout<<"loop was there and it was removed"<<endl;

//    if(!l.isloop())
//l.hashAndRemove();

cout<<endl;
l.pairwise_node_swap();
l.print();


    return 0;
}
