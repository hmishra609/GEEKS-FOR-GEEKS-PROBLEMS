#include<iostream>

using namespace std;

int main()

{
    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}
                   };

int temp[3][3];
     int r=3,c=3;

     for(int i=0;i<r;++i)
     {

      for(int j=0;j<c;j++)
      {
       temp[j][i]=arr[i][j];
      }
     }


     for(int i=0;i<r;++i)
     {

      for(int j=0;j<c;j++)
      {
     arr[i][j]=temp[i][j];
     cout<<arr[i][j]<<" ";
      }
     cout<<endl;
     }



return 0;
}
