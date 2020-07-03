#include<stdio.h>

int arr[]={1,2,3,4,5,6,7};
void reverse(int low,int high)
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



}



int main()
{

    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int  high=n-1;
int d,i;
printf("enter the no. of rotations");
scanf("%d",&d);



printf("Before the rotation\n");
i=0;
while(i<n)
{
printf("%d ",arr[i]);
i++;
}
printf("\n");
printf("\n");








printf("after first rotation\n");
reverse(low,d-1);
i=0;
while(i<n)
{
printf("%d ",arr[i]);
i++;
}
printf("\n");
printf("\n");


printf("after second rotation\n");
reverse(d,n-1);


i=0;
while(i<n)
{
printf("%d ",arr[i]);
i++;
}
printf("\n");
printf("\n");


reverse(low,high);

printf("Final rotation\n");
i=0;
while(i<n)
{
printf("%d ",arr[i]);
i++;
}
printf("\n");
printf("\n");


   return 0;
}


