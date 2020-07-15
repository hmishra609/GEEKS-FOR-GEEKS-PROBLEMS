#include<bits/stdc++.h>

using namespace std;

int sortK(int arr[],int n,int k)
{
  priority_queue <int,vector<int>,greater<int>> pq;

  for(int i=0;i<=k;i++)
  {
   pq.push(arr[i]);
  }

  int index=0;
  for(int i=k+1;i<n;i++)
  {
      arr[index++]=pq.top();
      pq.pop();
      pq.push(arr[i]);
  }

  while(pq.empty()==false)
  {
   arr[index++]=pq.top();
   pq.pop();
  }

}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

}

int main()
{
    int arr[]={2,6,3,12,56,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;

    sortK(arr,n,k);

    cout<<"sorted array is : ";
    print(arr,n);

}
