#include<iostream>
using namespace std;

int*  insertion_sort(int ar[],int n)
{
    int key;
int j;
    for(int i=1;i<n;i++)
    {
    key=ar[i];

    for(j=i-1;(j>=0&&ar[j]);j--)
    {
        ar[j+1]=ar[j];
    }
    ar[j+1]=key;
    }
return ar;
}

int main()
{
int ar[]={9,8,7,6,5,4,3,2,1};
int n=(sizeof(ar)/sizeof(ar[0]));

int *p=insertion_sort(ar,n);
for(int i=0;i<n;i++)
    cout<<*(p+i)<<" ";
return 0;
}


