#include<bits/stdc++.h>

using namespace std;

struct act
{
    char actid;
    int start;
    int End;
};

bool comparison(act a,act b)
{
  return (a.End<b.End);
}

void ActivitySelection(act arr[],int n)
{
    sort(arr,arr+n,comparison);

int i=0;
    cout<<arr[i].actid<<" ";

    for(int j=1;j<n;j++)
    {
        if(arr[j].start>=arr[i].End)
        {
           cout<<arr[j].actid<<" ";
           i=j;
        }
    }

}

int main()
{
    act arr[]={{'1',0,6},{'2',3,4},
                {'3',1,2},{'4',5,9},
                {'5',5,7},{'6',8,9}};

    int n=sizeof(arr)/sizeof(arr[0]);

    ActivitySelection(arr,n);
return 0;
}
