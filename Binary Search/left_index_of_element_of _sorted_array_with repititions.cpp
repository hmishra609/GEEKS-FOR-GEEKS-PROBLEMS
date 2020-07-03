#include<iostream>

using namespace std;
int binary(int ar[],int l,int h,int x)
{
if(l>h)
        return -1;
int mid=(l+h)/2;

if(ar[mid]==x&&(mid==0||ar[mid-1]!=x))
    return mid;

if(ar[mid]>=x)
    return binary(ar,l,mid-1,x);
if(ar[mid]<x)
    return binary(ar,mid+1,h,x);
}
int main()
{
int ar[]={1,2,3,3,3,5,6,7,8,9};
int l=0;
int h=(sizeof(ar)/sizeof(ar[0]));
int x=3;


cout<<binary(ar,l,h-1,x);
return 0;
}
