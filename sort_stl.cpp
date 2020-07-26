#include<bits/stdc++.h>

using namespace std;

struct act
{
    int s;
    int f;
};

bool compare(act a,act b)
{
    return (a.f>b.f);
}

///when we need to sort object in required order we need to define our own comparison function

///for the integer primary data types we have greater<type>() funtion defined 
///for example - sort(arr,arr+n,greater<int>());
int main()
{
    act arr[]={{1,2},{0,3},{2,5}};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n,compare);
    for(auto k:arr)
    {
        cout<<k.s<<" ";
    }
}
