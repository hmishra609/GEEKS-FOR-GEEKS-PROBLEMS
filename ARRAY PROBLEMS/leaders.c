#include<stdio.h>
int n;
int arr[]={5,3,20,15,8,3};


int main()
{

   n=sizeof(arr)/sizeof(arr[0]);

    int low=0;
    int  high=n-1;
int d,i;
int max=0;
for(i=high;i>=0;i--)
{
    if(max<=arr[i])
    {

        max=arr[i];
printf("%d ",max);
    }
}


   return 0;
}



