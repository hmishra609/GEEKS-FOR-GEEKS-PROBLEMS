#include<bits/stdc++.h>

using namespace std;

struct job
{
    char jobid;
    int deadline;
    int profit;
};

bool comparison(job a,job b)
{
    return (a.profit>b.profit);
}

void printJobScheduling(job arr[],int n)
{
    sort(arr,arr+n,comparison);

        ///result array stores order in which job are schedulled
        ///slot maintain whether slot is free or occupied
    int result[n];
    bool slot[n];


    ///make all slot free
    for(int i=0;i<n;i++)
        slot[i]=false;

    ///Iterate through all jobs
    for(int i=0;i<n;i++)
    {
        ///find a free optimal slot for this job
        ///we start from last possible slot for that job with the help of its deadline so that
///we can use the possible predecessor slot of this job for another job with low deadline to maximize the profit
        for(int j=min(n,arr[i].deadline)-1;j>=0;j--)
        {
            if(slot[j]==false)
            {
             result[j]=i;
             slot[j]=true;
             break;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(slot[i])
            cout<<arr[result[i]].jobid<<" ";
    }
}

int main()
{
    job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                   {'d', 1, 25}, {'e', 3, 15}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobsn";
    printJobScheduling(arr, n);
    return 0;
}
