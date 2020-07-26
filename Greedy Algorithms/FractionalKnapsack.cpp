#include<bits/stdc++.h>

using namespace std;

struct item
{
    int value;
   int weight;


};

bool comparison(item a,item b)
{
double r1=(double)a.value/a.weight;
double r2=(double)b.value/b.weight;
return (r1>r2);
}

double fractionalKnapsack(item arr[],int n,int W)
{
sort(arr,arr+n,comparison);


int totalweight=0;
double totalvalue=0.0;

for(int i=0;i<n;i++)
{
cout<<totalvalue<<endl;
    ///if will process item with total weight taken
    if(totalweight+arr[i].weight<=W)
    {
        totalweight+=arr[i].weight;
        totalvalue+=arr[i].value;
    }


    ///else will process part of item
    else
    {
      ///(left/arr[i].weight) create the fraction and on multiplying with arr[i].value we get value of that weight
      ///this will complete the knapsack
            int left=W-totalweight;
            totalvalue+=arr[i].value*((double)left/arr[i].weight);
            break;
    }
}
return totalvalue;

}

// driver program to test above function
int main()
{
    int W = 50;   //    Weight of knapsack
    item arr[] = {{60, 10}, {100, 20}, {120, 30}};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum value we can obtain = "
         << fractionalKnapsack(arr,n,W);
    return 0;
}
