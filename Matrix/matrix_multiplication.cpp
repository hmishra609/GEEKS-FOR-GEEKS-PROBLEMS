#include<iostream>
#define Max 3
using namespace std;
int main()
{
 int A[Max][Max];
int B[Max][Max];
int C[Max][Max];
int r,c;
cout<<"Enter the no of rows and column of mat A";
cin>>r>>c;

cout<<"Enter the elements of mat A"<<endl;

for(int i=0;i<r;i++)
for(int j=0;j<c;j++)
cin>>A[i][j];


for(int i=0;i<r;i++)
{

for(int j=0;j<c;j++)
{
    cout<<A[i][j]<<" ";
}
cout<<endl;
}
cout<<endl;
cout<<endl;

cout<<"Enter the elements of mat B"<<endl;

for(int i=0;i<r;i++)
for(int j=0;j<c;j++)
cin>>B[i][j];


for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
{cout<<B[i][j]<<" ";
}
cout<<endl;
}

int result[r][c];
int sum=0;
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        for(int k=0;k<c;k++)
        {
        sum=sum+A[i][k]*B[k][j];
        }
        result[i][j]=sum;
        sum=0;
    }
}



for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
{
    cout<<result[i][j]<<" ";
}
cout<<endl;
}



}
