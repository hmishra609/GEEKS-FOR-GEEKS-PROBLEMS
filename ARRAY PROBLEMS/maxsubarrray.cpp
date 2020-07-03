#include<iostream>
using namespace std;

int main()
{
  int cmax=0,fMax=0;
  int k=3;
  int arr[]={1,2,3,1,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<k;i++)
      cmax+=arr[i];

    fMax=cmax;
    for(int i=k;i<n;i++)
    {
     cmax+=arr[i]-arr[i-k];
     fMax=max(fMax,cmax);
    }

    cout<<"Max sum is "<<fMax;
    return 0;

}
