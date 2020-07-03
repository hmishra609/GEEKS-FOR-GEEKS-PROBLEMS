#include <iostream>
using namespace std;

int maxWater(int arr[],int n)
{

  int res=0;
  for(int i=1;i<n-1;i++)
  {
    //updateing left value
     int left=arr[i];
     for(int j=0;j<i;j++)
     left=max(left,arr[j]);

    //updateing right value
     int right=arr[i];
     for(int j=i+1;j<n;j++)
      right=max(right,arr[j]);

     // update water
res=res+(min(left,right)-arr[i]);

  }

  return res;
}

int main()
{
    int arr[] = {1,4,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

 cout <<maxWater(arr, n);

    return 0;
}
