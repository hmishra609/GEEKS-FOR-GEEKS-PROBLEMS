#include<iostream>
using namespace std;
#include<unordered_set>
void print_duplicates(int ar[],int n)
{
 unordered_set<int> a;
 unordered_set<int> d;

for(int i=0;i<n;i++)
{
    if(a.find(ar[i])==a.end())
        a.insert(ar[i]);
    else
        d.insert(ar[i]);
}
d=a;
if(d==a)
    cout<<"true";
cout<<"duplicates elements are"<<endl;
unordered_set<int>::iterator it;

for(it=d.begin();it!=d.end();it++)
cout<<*(it)<<" ";
}
int main()
{
    int arr[] = {0,0,0,1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
    int n = sizeof(arr) / sizeof(int);

    print_duplicates(arr,n);
    return 0;
}
