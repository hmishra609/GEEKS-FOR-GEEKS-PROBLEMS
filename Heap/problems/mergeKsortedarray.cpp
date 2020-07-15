#include<bits/stdc++.h>
# define n 4
using namespace std;

struct minheapnode
{
int data;

int i;///index of array from which element is taken

int j;///index of next element to be picked from array

};

void Swap(minheapnode *x,minheapnode *y)
{
    minheapnode temp=*x;
    *x=*y;
    *y=temp;
}


class MinHeap
{
 minheapnode *harr;

 int hsize;
 public:
     MinHeap(minheapnode a[],int Size)
     {
        hsize=Size;
        harr=a;
        int i=(hsize-1)/2;///to get last internal node

        while(i>=0)
        {
            Minheapify(i);
            i--;
        }

     }
       // to get index of left child of node at index i
    int left(int i) { return (2*i + 1); }

    // to get index of right child of node at index i
    int right(int i) { return (2*i + 2); }

    // to get the root
    minheapnode getMin()
    { return harr[0]; }



void Minheapify(int i)
{
 int l=left(i);
 int r=right(i);
 int smallest=i;

 if(l<hsize&&harr[l].data<harr[i].data)
    smallest=l;
 if(r<hsize&&harr[r].data<harr[smallest].data)
    smallest=r;

    if(smallest!=i)
    {
        Swap(&harr[i],&harr[smallest]);
        Minheapify(smallest);
    }

}



    void replaceMin(minheapnode x)
    {
     harr[0]=x;
     Minheapify(0);
    }


};





int *mergeKArrays(int arr[][n],int k)
{
    ///to store o/p array
    int *result=new int[n*k];

    ///create a minheap with k nodes

    minheapnode *harr=new minheapnode[k];

    for(int i=0;i<k;i++)
    {
       harr[i].data=arr[i][0];

       ///index of array
       harr[i].i=i;
       harr[i].j=1;

    }

    MinHeap hp(harr,k);

    for (int c=0;c<n*k;c++)
    {
        minheapnode root=hp.getMin();
        result[c]=root.data;

    if(root.j<n)
       {
           root.data=arr[root.i][root.j];
            root.j+=1;
       }

    else
        root.data=INT_MAX;


        hp.replaceMin(root);
    }
return result;

}


void printArray(int ar[],int s)
{
    for (int i=0;i<s;i++)
{
    cout<<ar[i]<<" ";
}
}
int main()
{
    int arr[][n]={{2,6,12,34},
                   {1,9,20,1000},
                   {23,34,90,2000}

                };
                int k=sizeof(arr)/sizeof(arr[0]);

                int *result=mergeKArrays(arr,k);

cout<<"Merged array is "<<endl;

printArray(result,n*k);

}
