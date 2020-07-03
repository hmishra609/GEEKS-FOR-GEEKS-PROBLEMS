#include<iostream>
#include<unordered_set>
using namespace std;

bool subarrayExists(int arr[],int n)
{
 unordered_set<int> us;
 int prefix_sum=0;
 for(int i=0;i<n;i++)
 {
     prefix_sum+=arr[i];
   if(prefix_sum==0||us.find(prefix_sum)!=us.end())
   return true;

   us.insert(prefix_sum);
 }
 return false;
}
int main()
{    int arr[] = {-3, 3, 3, 1, 6};

    int n = sizeof(arr)/sizeof(arr[0]);

    if (subarrayExists(arr, n))
        cout << "Found a subarray with 0 sum";
    else
        cout << "No Such Sub Array Exists!";
    return 0;
}



