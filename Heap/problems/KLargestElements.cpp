#include<bits/stdc++.h>
using namespace std;

int Largest_K(int arr[],int n,int k)///max heap approach
{
    priority_queue<int> pq;
    for(int i=0;i<n;i++)
    {
    pq.push(arr[i]);
    }
    for(int i=0;i<k;i++)
    {
     cout<<pq.top()<<" ";
     pq.pop();
    }

}

int Largest_K1(int arr[],int n,int k)///min heap approach
{
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<k;i++)
    {
    pq.push(arr[i]);
    }
    for(int i=k+1;i<n;i++)
    {
        if(pq.top()<arr[i])
        {
            pq.pop();
            pq.push(arr[i]);
        }
     }

     while(pq.empty()==false)
     {
         cout<<pq.top()<<" ";
         pq.pop();
     }

}

 int main()
{
    int arr[]={2,6,3,12,56,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;

    Largest_K1(arr,n,k);


}

