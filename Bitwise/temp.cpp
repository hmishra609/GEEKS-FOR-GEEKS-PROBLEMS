
#include<iostream>

using namespace std;

int odd_occurence(int arr[],int s)
{
  int result=0;

  for(int i=0;i<s;i++)
  {
   result^=arr[i];
  }
  return result;
}

int main()
{
int arr[]={0,0,1,1,2,2,2,3,3,4,4};
int s=sizeof(arr)/sizeof(arr[0]);

cout<<odd_occurence(arr,s);


}
