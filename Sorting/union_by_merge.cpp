
#include<iostream>

using namespace std;

void union_arr(int A[],int B[],int n1,int n2)
{
    int i=0;
    int j=0;
    while(i<n1&&j<n2)
    {
             if(A[i]<B[j])
                    cout<<A[i++]<<" ";
             else if(B[j]<A[i])
                    cout<<B[j++]<<" ";

            else                //if boh are equal case
            {
                    cout<<B[j++]<<" ";
            i++;
            }
    }
while(i<n1)
cout<<A[i++]<<" ";

while(j<n2)
cout<<B[j++]<<" ";

}

int main()
{
int ar[]={1,2,3,4,5};
int ar1[]={6,7,8,9};
int m=(sizeof(ar)/sizeof(ar[0]));
int n=(sizeof(ar1)/sizeof(ar1[0]));


union_arr(ar,ar1,m,n);

return 0;
}


