#include<iostream>
using namespace std;

void Selection_sort(int arr[],int n)
{
    int minx;
for(int i=0;i<n-1;i++)
{
minx=i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[minx])
            minx=j;

            swap(arr[minx],arr[i]);
    }
}
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";

}

int main()
{
int ar[]={9,8,7,6,5,4,3,2,1};
int n=(sizeof(ar)/sizeof(ar[0]));

Selection_sort(ar,n);
return 0;
}

