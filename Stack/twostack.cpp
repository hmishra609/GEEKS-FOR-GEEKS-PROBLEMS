#include<bits/stdc++.h>

using namespace std;

class Twostack
{
    int *arr;
    int top1;
    int top2;
    int Size;

public:
        Twostack(int n)
        {
            Size=n;
            arr=new int[n];
            top1=-1;
            top2=Size;
        }

        void push1(int x)
        {
            if(top1<top2-1)
            {
            top1++;
            arr[top1]=x;

            }
            else
            {
             cout<<"Overflow1";
            }
        }

        void push2(int x)
        {
            if(top1<top2-1)
            {
            top2--;
            arr[top2]=x;

            }
            else
            {
             cout<<"Overflow2";
            }
        }

        int pop1()
        {
         if(top1>=0)
         {
          int x=arr[top1--];
          return x;
         }
         else
            {
            cout<<"Underflow1";
            return -1;
            }
        }

         int pop2()
        {
         if(top2<Size)
         {
          int x=arr[top2++];
          return x;
         }
         else
            {
            cout<<"Underflow2";
            return -1;
            }
        }

        int Top1()
        {
            if(top1!=-1)
           return arr[top1];
           else
            return -1;
        }


        int Top2()
        {
            if(top2!=Size)
           return arr[top2];
           else
            return -1;
        }
};

int main()
{
Twostack s(5);
s.push1(1);
s.push1(2);
s.push1(3);
s.push1(4);


s.push2(10);
cout<<s.Top1()<<"\n";

s.pop1();s.pop1();s.pop1();s.pop1();s.pop1();
cout<<s.Top1();

}
