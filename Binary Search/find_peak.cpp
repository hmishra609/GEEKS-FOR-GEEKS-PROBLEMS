#include<iostream>

using namespace std;

int find_peak(int arr[],int l,int h,int n)
{

    int mid=(l+h)/2;
 if((mid==0||arr[mid-1]<=arr[mid])&&(mid==n-1||arr[mid]>=arr[mid+1]))
 return mid;

 if(arr[mid-1]>arr[mid])
    return find_peak(arr,l,mid-1,n);

    return find_peak(arr,mid+1,h,n);

}

int main()
{
    int ar[]={1,2,3,4,5,6,7,21,9};
int l=0;
int n=(sizeof(ar)/sizeof(ar[0]));
int h=n-1;
cout<<find_peak(ar,l,h,n);

return 0;




}
