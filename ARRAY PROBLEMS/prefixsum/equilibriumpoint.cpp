#include<iostream>
using namespace std;

int isEqpoint(int arr[],int n)
{
int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];

int l_sum=0;

for(int i=0;i<n;i++)
{
    if(l_sum==sum-arr[i])
        return 1;
    l_sum+=arr[i];
    sum-=arr[i];
}
return 0;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
int a=isEqpoint(arr,n);
if(a)
    cout<<"Eqilibrium point";
else
    cout<<"No Eqilibrium point  is there";
}
