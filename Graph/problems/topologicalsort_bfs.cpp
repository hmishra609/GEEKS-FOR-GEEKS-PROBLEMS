#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int>a[],int u, int v)
{
    a[u].push_back(v);
}


void topologicalsort_bfs(vector<int> a[],int v)
{
    vector<int> in_deg(v,0);

///traverse the adjecency list to fill indegree of vertices

    for(int i=0;i<v;i++)
    {
        for(int k:a[i])
        {
            in_deg[k]++;
        }
    }

queue<int> q;

for(int i=0;i<v;i++)
{
    if(in_deg[i]==0)
        q.push(i);

}

int Count=0;

vector<int> top_order;


while(!q.empty())
{
    ///extract front and add it to topological_order vector
    int u=q.front();
    q.pop();
    top_order.push_back(u);


///Iterate through all its neighbour nodes
///of dequeued node u and decrease their in_deg by 1;


    for(int k:a[u])
    {
        if(--in_deg[k]==0)
            q.push(k);
    }

    Count++;



}
if(Count!=v)
    {
        cout<<"There exists a cycle in graph\n";
        return;
    }

for(int i=0;i<top_order.size();i++)
{
    cout<<top_order[i]<<" ";

}
}

int main()
{
    // Create a graph given in the
    // above diagram
    int v=6;
    vector<int>a[v];
    addEdge(a,5, 2);
    addEdge(a,5, 0);
    addEdge(a,4, 0);
    addEdge(a,4, 1);
    addEdge(a,2, 3);
    addEdge(a,3, 1);

    cout << "Following is a Topological Sort of\n";
    topologicalsort_bfs(a,v);

    return 0;
}

