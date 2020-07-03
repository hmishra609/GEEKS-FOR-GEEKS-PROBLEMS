#include<bits/stdc++.h>

using namespace std;

void CalculateSpan(int price[],int n,int span[])
{
span[0]=1;

for(int i=1;i<n;i++)
{
    span[i]=1;
    for(int j=i-1;j>=0&&(price[i]>=price[j]);j--)
    {
    span[i]++;
    }
}
}

void printArray(int arr[],int n)
{
for(int i=0;i<n;i++)
{
 cout<<arr[i]<<" ";
}
}

int main()
{

int p[]={10,4,5,90,120,80};

int n=sizeof(p)/sizeof(p[0]);

int s[n];
CalculateSpan(p,n,s);

printArray(s,n);
}
