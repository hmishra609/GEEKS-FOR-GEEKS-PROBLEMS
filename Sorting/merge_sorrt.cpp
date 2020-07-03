#include<iostream>
using namespace std;


void  Merge(int ar[],int l,int mid,int h)
{
int n1=mid-l+1;
int n2=h-mid;

int L[n1];
int R[n2];

for(int i=0;i<n1;i++)
    L[i]=ar[l+i];

for(int j=0;j<n2;j++)
    R[j]=ar[mid+1+j];

int i=0;
int j=0;
int k=l;
while(i<n1&&j<n2)
{
    if(L[i]>=R[j])
        ar[k]=R[j++];
    else
        ar[k]=L[i];

    k++;
}

    while(i<n1)
    {
        ar[k++]=L[i++];
    }

        while(j<n2)
        {
        ar[k++]=R[j++];
        }


}


void merge_sort(int ar[],int l,int h)
{
if(l<h)
{
int mid=(l+h)/2;
merge_sort(ar,l,mid);
merge_sort(ar,mid+1,h);
Merge(ar,l,mid,h);
}
}

int main()
{
int ar[]={9,8,7,6,5,4,3,2,1};
int n=(sizeof(ar)/sizeof(ar[0]));

merge_sort(ar,0,n-1);
for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";
return 0;
}


