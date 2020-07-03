




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
int find_pivot(int arr[],int l,int h)
{
   if(h<l)
        return -1;
   if(h==l)
return l;

   int mid=(l+h)/2;

   if((mid<h)&&(arr[mid]>arr[mid+1]))
    return mid;

   if(l<mid&&arr[mid-1]>arr[mid])
                return mid-1;

if(arr[l]<=arr[mid])
    return find_pivot(arr,mid+1,h);

return find_pivot(arr,l,mid-1);

}


int pivoted_binary(int arr[],int n,int l,int h,int x)
{
int pivot=find_pivot(arr,l,h);
if(pivot==-1)
    return binary(arr,l,h,x);

if(arr[pivot]==x)
    return pivot;

if(arr[0]<=x)
    return binary(arr,0,pivot-1,x);

return binary(arr,pivot+1,h,x);

}

int main()
{
int ar[]={10,12,14,15,1,2,3,5,6,8,9};
int l=0;
int h=(sizeof(ar)/sizeof(ar[0]));
int x=6;

cout<<pivoted_binary(ar,h,l,h-1,x);
return 0;
}


