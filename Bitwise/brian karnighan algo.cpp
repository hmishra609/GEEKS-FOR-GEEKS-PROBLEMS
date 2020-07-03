#include<iostream>

using namespace std;


int countbits(int n)
{
    int c=0;
    while(n)
    {
        n=n&(n-1);
        c++;
    }
    return c;

    }

int main()
{
    int n=7;
    cout<<countbits(n);
return 0;
}


