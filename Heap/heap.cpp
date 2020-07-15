#include<bits/stdc++.h>

using namespace std;

struct MinHeap
{
int *harr;
int Size;
int cap;

MinHeap(int k)
{
cap=k;
harr=new int[cap];
Size=0;
}

int parent(int i)
{
    return (i-1)/2;
}

int left(int i)
{
    return (2*i)+1;
}

int right(int i)
{
    return (2*i)+2;
}


int getMin()
{
    return harr[0];
}


void insert_key(int k)
{
if(Size==cap)
{   cout<<"\nOverflow : Couldn't insertkey";
    return;
}
int i=Size;
harr[Size++]=k;


///Fix the min heap property if it is voilated
while(i>0&&harr[parent(i)]>harr[i])
{
  swap(harr[parent(i)],harr[i]);
  i=parent(i);
}
}///insert function()

int extractMin()
{
    if(Size<=0)
        return INT_MAX;

    if(Size==1)
    {
      Size--;
      return harr[0];
    }

///store the min and remove it from heap

int root=harr[0];
harr[0]=harr[Size-1];
Size--;
MinHeapify(0);

return root;
}

void MinHeapify(int i)
{
    int l=left(i);
    int r=right(i);
    int smallest=i;
    if(l<Size&&harr[l]<harr[smallest])
        smallest=l;
    if(r<Size&&harr[r]<harr[smallest])
        smallest=r;

    if(smallest!=i)
    {
        swap(harr[i],harr[smallest]);
        MinHeapify(smallest);
    }
}

void decreaseKey(int i,int new_v)
{
  harr[i]=new_v;
  while(i!=0&&harr[i]<harr[parent(i)])
  {
      swap(harr[parent(i)],harr[i]);
      i=parent(i);
  }
}

void delete(int i)
{
    decreaseKey(i,INT_MIN);
    extractMin();
}

int buildHeap(int *arr,int n)
{

 for(int i=(n-2)/2;i>0;i--)
        heapify(i);
}

};

int main()
{
 MinHeap h(11);

 h.insert_key(3);
 h.insert_key(2);
 h.insert_key(1);
 h.insert_key(15);
 h.insert_key(5);
 h.insert_key(4);
 h.insert_key(45);

 cout<<h.getMin()<<endl;
 h.extractMin();
 cout<<h.getMin()<<endl;

h.decreaseKey(2,0);

cout<<h.getMin();

}
