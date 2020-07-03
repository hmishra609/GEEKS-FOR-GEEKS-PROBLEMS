#include<iostream>

using namespace std;

int main()
{
    int x=0;

    if(x&&!(x&(x-1)))
        cout<<"true";
    else
        cout<<"false";
return 0;
}

