#include<bits/stdc++.h>
#define m 10
#define n 10
using namespace std;

bool isSafe(int arr[m][n],int i,int j,bool vis[m][n])
{
 if(i>=0&&j>=0&&i<m&&j<n&&arr[i][j]==1&&!vis[i][j])
    return true;
 return false;
}

int shortestpath(int arr[m][n],int i,int j,int x,int y,bool vis[m][n])
{
if(!isSafe(arr,i,j,vis))
    return 10000;
if(i==x&&j==y)
    return 0;
vis[i][j]=true;
int left=shortestpath(arr,i,j-1,x,y,vis)+1;
int right=shortestpath(arr,i,j+1,x,y,vis)+1;
int top=shortestpath(arr,i-1,j,x,y,vis)+1;
int bottom=shortestpath(arr,i+1,j,x,y,vis)+1;

///this line enable backtracking
vis[i][j]=false;


return (min(min(left,right),min(top,bottom)));


}

int main()
{

int arr[10][10] =
	{
		{ 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
		{ 0, 1, 1, 1, 1, 1, 0, 1, 0, 1 },
		{ 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 },
		{ 1, 0, 1, 1, 1, 0, 1, 1, 0, 1 },
		{ 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 },
		{ 1, 0, 1, 1, 1, 0, 0, 1, 1, 0 },
		{ 0, 0, 0, 0, 1, 0, 0, 1, 0, 1 },
		{ 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
		{ 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
		{ 0, 0, 1, 0, 0, 1, 1, 0, 0, 1 },
	};

bool vis[m][n];
memset(vis,false,sizeof(vis));


int l=shortestpath(arr,0,0,7,5,vis);
if(l>1000)
cout<<"path is not possible";
else
    cout<<"the shortest path b/w them"<<l;
return 0;
}
