#include<bits/stdc++.h>

using namespace std;
///this is a generallized program of NQueen problem
#define n 4


void printBoard(int board[n][n])
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
}


/* A utility function to check if a queen can
   be placed on board[row][col]. Note that this
   function is called when "col" queens are
   already placed in columns from 0 to col -1.
   So we need to check only left side for
   attacking queens */

bool isSafe(int board[n][n],int r,int c)
{
int i,j;

///check left side
for(i=c;i>=0;i--)
    if(board[r][i])
        return false;

///check upper left cornor
for(i=r,j=c;i>=0&&j>=0;i--,j--)
        if(board[i][j])
            return false;
///check lower left cornor
for(i=r,j=c;i<n&&j>=0;i++,j--)
        if(board[i][j])
            return false;

return true;

}


bool solveNQueenUtil(int b[n][n],int col)
{

    /* base case: If all queens are placed
      then return true */


if(col>=n)
    return true;

/* Consider this column and try placing
       this queen in all rows one by one */
for(int i=0;i<n;i++)
{

    /* Check if the queen can be placed on
          board[i][col] */

    if(isSafe(b,i,col))
    {
        /* Place this queen in board[i][col] */
         b[i][col]=1;


          /* recur to place rest of the queens */
         if(solveNQueenUtil(b,col+1))
            return true;



          /* If placing queen in board[i][col]
               doesn't lead to a solution, then
               remove queen from board[i][col] */
        ///backtracking
         b[i][col]=0;

    }

}
/* If the queen cannot be placed in any row in
        this colum col  then return false */
return false;
}


/* This function solves the N Queen problem using
   Backtracking. It mainly uses solveNQUtil() to
   solve the problem. It returns false if queens
   cannot be placed, otherwise, return true and
   prints placement of queens in the form of 1s.
   Please note that there may be more than one
   solutions, this function prints one  of the
   feasible solutions.*/

   bool solveNQueen()

   {
      int b[n][n];
      memset(b,0,sizeof(b));

      if(!solveNQueenUtil(b,0))
        cout<<"Solution doesn't exist";
      else
        printBoard(b);
      return true;
   }


int main()
{
    solveNQueen();
    return 0;
}
