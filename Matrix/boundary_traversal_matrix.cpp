#include<iostream>
using namespace std;

int main()
{
int r=3,c=3;
 int arr[3][3]={   {1,2,3},
                   {4,5,6},
                   {7,8,9}
                   };
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
    if(i==0||i==r-1||j==0||j==c-1)
    {
    cout<<arr[i][j]<<" ";
    }
    else
    cout<<" ";

}
cout<<endl;
}

return 0;
}
