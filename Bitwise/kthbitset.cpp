#include<iostream>

using namespace std;

int main()
{
    int x=5;
    int k=1;

    if(x&(1<<(k-1)))
        cout<<"true";
    else
        cout<<"false";
return 0;
}
