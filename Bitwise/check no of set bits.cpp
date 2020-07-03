#include<iostream>

using namespace std;

int recursive_countbits(int n)
{

if(n==0)
    return 0;

else
    return (n&1)+recursive_countbits(n>>1);

    }


int countbits(int n)
{
    int c=0;
    while(n)
    {
        c+=n&1;
        n>>=1;
    }
    return c;

    }

int main()
{
    int n=7;
    //cout<<countbits(n);
cout<<recursive_countbits(n);
return 0;
}


