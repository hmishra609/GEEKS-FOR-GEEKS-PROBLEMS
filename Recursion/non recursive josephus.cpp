#include <iostream>
 using namespace std;

 int josephus(int n,int k)
 {
int result=0;
for(int i=0;i<=n;++i)
    result=(result+k)%n;

return result;
     }
int main()
{
    cout<<josephus(7,3);
}
