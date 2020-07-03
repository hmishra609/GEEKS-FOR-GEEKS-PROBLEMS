#include<iostream>
using namespace std;

 int Partition(int ar[],int l,int h)
 {
     int pivot=ar[l];
int i=l;
int j=h;

while(i<j)
{
 while(ar[i]<pivot)
        i++;

 while(ar[j]>pivot)
    j++;
swap(ar[i],ar[j]);
}
swap(ar[l],ar[j]);

return j;
 }


void quick_sort(int ar[],int l,int h)
{
 if(l<h)
 {
  int p=Partition(ar,l,h);
  quick_sort(ar,l,p);
  quick_sort(ar,p+1,h);
 }
}


int main()
{
int ar[]={9,8,7,6,5,4,3,2,1};
int n=(sizeof(ar)/sizeof(ar[0]));

quick_sort(ar,0,n-1);
return 0;
}

