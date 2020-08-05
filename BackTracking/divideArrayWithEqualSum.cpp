#include<bits/stdc++.h>
using namespace std;

bool Partition(int arr[],int s,int sum,int i,vector<int> &ans)
{

    if(i>=s||sum<0)
        return false;
    if(sum==0)
        return true;


ans.push_back(arr[i]);
        bool leftadd=Partition(arr,s,sum-arr[i],i+1,ans);
        if(leftadd)
        return true;


        ans.pop_back();
        return Partition(arr,s,sum,i+1,ans);

}


int main()
{
    int arr[]={2,1,2,3,4,8};
    int sum=0;
    for(int k:arr)
        sum+=k;

int s=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    bool isPossible=(sum&1)==0&&Partition(arr,s,sum/2,0,ans);



    if(isPossible)
    {

        for(int i=0;i<ans.size();i++)
        {
        cout<<ans.at(i)<<" ";
        }
    }
    else
        cout<<"not posssible";


    return 0;
}



