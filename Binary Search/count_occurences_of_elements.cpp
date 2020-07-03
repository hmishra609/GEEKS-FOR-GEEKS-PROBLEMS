#include<iostream>

using namespace std;
int binary_right(int ar[],int l,int h,int x,int siz)
{
if(l>h)
        return -1;
int mid=(l+h)/2;

if(ar[mid]==x&&(mid==(siz-1)||ar[mid+1]!=x))
    return mid;

if(ar[mid]>x)
    return binary_right(ar,l,mid-1,x,siz);
if(ar[mid]<=x)
    return binary_right(ar,mid+1,h,x,siz);
}

int binary_left(int ar[],int l,int h,int x)
{
if(l>h)
        return -1;
int mid=(l+h)/2;

if(ar[mid]==x&&(mid==0||ar[mid-1]!=x))
    return mid;

if(ar[mid]>=x)
    return binary_left(ar,l,mid-1,x);
if(ar[mid]<x)
    return binary_left(ar,mid+1,h,x);
}


int main()
{
int ar[]={1,3,3,3,3,3,5,6,7,8,9};
int l=0;
int h=(sizeof(ar)/sizeof(ar[0]));
int x=3;

int left=binary_left(ar,l,h-1,x);
int right=binary_right(ar,l,h-1,x,h);





int result=(right-left)+1;
cout<<result;
return 0;
}
