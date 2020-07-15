#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);

}

void DFS(vector<int> a[],int v,int s,vector<bool> &visited)
{

visited[s]=true;
cout<<s<<" ";
for(int i=0;i<v;i++)
{
    if(visited[i]==false)
        DFS(a,v,i,visited);
}
}

int main()
{
    int v=8;
    vector<int>  adj[v];
    vector <bool> visited(v,false);
    addEdge(adj,0,1);
    addEdge(adj,0,4);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);

    addEdge(adj,7,5);

    DFS(adj,v,8,visited);
return 0;
}

