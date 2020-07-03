#include<iostream>

using namespace std;

int maxWater(int arr[],int n)
{
    int water=0;
    int left[n];
    int right[n];


    left[0]=arr[0];
    for(int i=1;i<n;i++)
        left[i]=max(left[i-1],arr[i]);

    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
        right[i]=max(right[i+1],arr[i]);

for(int i=0;i<n;i++)
    water+=(min(left[i],right[i])-arr[i]);

    return water;
}


int main()
{
    int arr[]={3,0,2,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
 cout<<maxWater(arr,n);

}
