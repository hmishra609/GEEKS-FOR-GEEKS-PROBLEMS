#include<iostream>

using namespace std;

int main()

{
    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}
                   };
     int r=3,c=3;

     for(int i=0;i<r;++i)
     {
         if(i%2!=0)
       {
      for(int j=c-1;j>=0;j--)
      {
       cout<<arr[i][j]<<" ";
      }
     }
     else
     {
      for(int j=0;j<c;j++)
      {
       cout<<arr[i][j]<<" ";
      }
     }
     cout<<endl;
    }
return 0;
}
