#include<stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int  high=n-1;
    reverse(low,high,arr,n);
    return 0;
}


int reverse(int low,int high,int arr[],int n)
{

int temp=0,i=0;
    while(low<high)
    {
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;

        low++;
        high--;

    }
    while(i<n)
    {
    printf("%d ",arr[i]);
    i++;
    }

}


