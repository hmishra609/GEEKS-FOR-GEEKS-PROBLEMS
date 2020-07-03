#include<iostream>
using namespace std;
#include<unordered_set>
void print_duplicates(int ar[],int n)
{
 unordered_set<int> a;
 unordered_set<int> d;

for(int i=0;i<n;i++)
{
        a.insert(ar[i]);
}


//unordered_set<int>::iterator it;
cout<<a.size();
//for(it=d.begin();it!=d.end();it++)
//cout<<*(it)<<" ";
}
int main()
{
    int arr[] = {0,0,1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 5};
    int n = sizeof(arr) / sizeof(int);

    print_duplicates(arr,n);
    return 0;
}
