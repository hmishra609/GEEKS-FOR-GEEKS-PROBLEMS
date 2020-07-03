#include <iostream>
 using namespace std;

 int josephus(int n,int k)
 {
     if(n==0)
        return n;
     else
        //for 1indexing
        return (((josephus(n-1,k))+k-1)%n)+1;

 //for 0 indexing
 //return (((josephus(n-1,k))+k)%n);

 }
int main()
{
    cout<<josephus(7,3);
}
