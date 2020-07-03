#include<iostream>
#include<unordered_map>
using namespace std;

void subarrayExists(int arr[],int n,int x)
{
 unordered_map<int,int> us;
 int prefix_sum=0;
 for(int i=0;i<n;i++)
 {
     prefix_sum+=arr[i];
   if(prefix_sum==x)
   {
    cout<<"subarray b/w index 0 -"<<i;
    return;
   }

if(us.find(prefix_sum-x)!=us.end())
    {
    cout<<"subarray b/w index"<<us[prefix_sum-x]<<"  to "<<i;
return;
    }
   us[prefix_sum]=i;
 }
 return;
}
int main()
{    int arr[] = {-3, 3, 3, 1, 6};

    int n = sizeof(arr)/sizeof(arr[0]);

    subarrayExists(arr, n,3);

    return 0;
}



