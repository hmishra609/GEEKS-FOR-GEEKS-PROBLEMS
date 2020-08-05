#include<bits/stdc++.h>

using namespace std;
#define n 4
bool isSafe(int maze[n][n],int i,int j,int x,int y,int visited[n][n])
{
    if(i>=0&&i<n&&j>=0&&j<n&&maze[i][j]==1)
        return true;
    return false;
}
bool solveMaze(int maze[n][n],int i,int j,int x,int y,int visited[n][n])
{
    if(i==x&&j==y)
    {
        visited[i][j]=1;
        return true;
    }

    if(isSafe(maze,i,j,x,y,visited))
    {
        visited[i][j]=1;

        ///move forward if it doesn't work
        if(solveMaze(maze,i,j+1,x,y,visited))
            return true;

        ///if that doesn't work move downward

        if(solveMaze(maze,i+1,j,x,y,visited))
            return true;

///backtracking  part
        visited[i][j]=0;
        return false;
    }
    return false;

}
void printSolution(int sol[n][n])
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout<<sol[i][j]<<" ";
        printf("\n");
    }
}
int main()
{
    int maze[n][n] = { { 1, 0, 0, 0 },
                       { 1, 1, 0, 1 },
                       { 0, 1, 0, 0 },
                       { 1, 1, 1, 1 } };

  int visited[n][n];
  memset(visited,0,sizeof(visited));
  if(solveMaze(maze,0,0,3,3,visited))
    printSolution(visited);
  else
    cout<<"Solution does't exist";
    return 0;
}
