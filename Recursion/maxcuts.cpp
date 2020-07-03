#include <iostream>
 using namespace std;

 int maxcuts(int n,int a,int b,int c)
 {
    if(n<0)
     return -1;

if(n==0)
    return 0;

int temp=max(maxcuts(n-a,a,b,c),maxcuts(n-b,a,b,c));
 int result=max( maxcuts(n-c,a,b,c),temp);
if(result==-1)
    return -1;


 return result+1;

     }
int main()
{
    cout<<maxcuts(5,2,1,5);
}
