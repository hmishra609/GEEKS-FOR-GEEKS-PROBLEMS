#include<iostream>

using namespace std;

int main()

{
    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}
                   };

int temp=0;
     int r=3,c=3;
int x=1,k=0,i=0,j=c-1;
int counts=0;
while(k!=x)
{
 if(arr[i][j]<x)
 {
  i++;
 }
 else if(arr[i][j]>x)
 {
     j--;
 }
else if(arr[i][j]==x)
    {k=x;
    cout<<"arr"<<"["<<i<<"]"<<"["<<j<<"]";
    }
counts++;



}

cout<<endl;

cout<<counts;
cout<<endl;
     for(int i=0;i<r;++i)
     {

      for(int j=0;j<c;j++)
      {

     cout<<arr[i][j]<<" ";
      }
     cout<<endl;
     }



return 0;
}
