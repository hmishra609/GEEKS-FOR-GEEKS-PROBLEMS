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

     for(int i=0;i<r;++i)
     {

      for(int j=i+1;j<c;j++)
      {
temp=arr[i][j];
arr[i][j]=arr[j][i];
arr[j][i]=temp;
      }
     }
int t=0;
   for(int i=0;i<r;++i)
     {
t=c-1;
      for(int j=0;j<c;j++)
      {
        if(j<t)
        {
        temp=arr[j][i];
        arr[j][i]=arr[t][i];
        arr[t][i]=temp;

        }
        t--;

      }
     }


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
