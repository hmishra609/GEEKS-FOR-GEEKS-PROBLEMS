#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);

}

bool detect_cycle_by_DFS(vector<int> adj[],int v,int s,vector<bool> &visited,int p)
{
    visited[s]=true;

    for(int k:adj[s])
    {
        if(visited[k]==false)
        {
            if(detect_cycle_by_DFS(adj,v,k,visited,s))
                    return true;
        }
        else if(visited[k]&&k!=p)
            return true;
    }
return false;

}
bool isCyclic_bfs(vector<int> a[],int v,int s,vector<bool> &visited)
{
    ///we maintain parent array to make sure that parent is not consider in the cycle
    vector<int> parent(v,-1);

    queue<int> q;
    visited[s]=true;
    q.push(s);

    while(!q.empty())
    {
       int u=q.front();
       q.pop();

       for(auto k:a[u])
       {
           if(visited[k]==false)
           {
               visited[k]=true;
               q.push(k);
               parent[k]=u;
           }

           else if(visited[k]&&parent[u]!=k)
            return true;
       }
    }
    return false;
}
int main()
{
    int v=5;
    vector<int>  adj[v];
    vector <bool> visited(5,false);
        addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,0,3);
    addEdge(adj,0,4);

    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,3,4);



//cout<<detect_cycle_by_DFS(adj,v,0,visited,-1);
  if(isCyclic_bfs(adj,v,0,visited))
    cout<<"there is a cycle";
    else
       cout<<"there is no cycle";


return 0;
}

