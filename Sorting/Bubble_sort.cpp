#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-i ;j++)
    {
        if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
    }
}
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";

}

int main()
{
int ar[]={9,8,7,6,5,4,3,2,1};
int n=(sizeof(ar)/sizeof(ar[0]));

bubble_sort(ar,n);
return 0;
}

