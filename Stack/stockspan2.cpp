#include<bits/stdc++.h>

using namespace std;

void CalculateSpan(int price[], int n, int span[])
{
    stack <int> s;
    s.push(0);
    span[0]=1;

    for(int i=1;i<n;i++)
    {
    while(!s.empty()&&price[s.top()]<=price[i])
        s.pop();

    span[i]=(s.empty())?i+1:i-s.top();

    s.push(i);
    }

}

void print(int s[],int n)
{
    for(int i=0;i<n;i++)
    {
     cout<<s[i]<<" ";
    }
}
int main()
{
   int price[]={10,4,5,90,120,80};
   int n=sizeof(price)/sizeof(price[0]);

   int span[n];

   CalculateSpan(price,n,span);
    print(span,n);
}
