#include<iostream>
using namespace std;
int getsum(int[],int,int);

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
  int prefix[n];
  int l,r;
  prefix[0]=arr[0];
for(int i=1;i<n;i++)
    {
prefix[i]=prefix[i-1]+arr[i];
    }
    cout<<"enter the starting & ending index for sum";
    cin>>l>>r;
    cout<<"sum is : 2"<<getsum(prefix,l,r);

}
int getsum(int prefix[],int l,int r)
{
    int sum=0;
    if(l!=0)
    {
        sum=prefix[r]-prefix[l-1];
    }
    else
        sum=prefix[r];

    return sum;
}
