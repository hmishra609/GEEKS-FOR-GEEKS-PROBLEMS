#include<iostream>
using namespace std;
int binary(int ar[],int l,int h,int x)
{
if(l>h)
        return -1;
int mid=(l+h)/2;

if(ar[mid]==x)
    return mid;

if(ar[mid]>x)
    return binary(ar,l,mid-1,x);
if(ar[mid]<x)
    return binary(ar,mid+1,h,x);
}






int find_element(int arr[],int x)
{
    if(arr[0]==x)
        return 0;
    int i=1;
    while(arr[i]<x)
        i*=2;

    if(arr[i]==x)
        return i;
    else
        return binary(arr,i/2,i,x);

}

int main()
{
int ar[]={1,2,3,5,6,8,9,10,12,14,15};
int l=0;
int h=(sizeof(ar)/sizeof(ar[0]));
int x=6;

cout<<find_element(ar,x);
return 0;
}

