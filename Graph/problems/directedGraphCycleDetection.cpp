#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);


}
/*
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

*/
bool isCyclic_dfs(vector<int> a[],int v,int s,vector<bool> &visited,vector<bool> &recStack)
{
   if(visited[s]==false)
   {


    visited[s]=true;
    recStack[s]=true;
    for(int k:a[s])
    {
        if(visited[k]==false&&isCyclic_dfs(a,v,k,visited,recStack))
                    return true;

        else if(recStack[k])
            return true;

    }
   }
    recStack[s]=false;
    return false;
}
int main()
{
    int v=5;
    vector<int>  adj[v];
    vector <bool> visited(v,false);
    vector <bool> recStack(v,false);

        addEdge(adj,0,1);
    addEdge(adj,0,2);
    //addEdge(adj,2,0);
    //addEdge(adj,1,2);

    //addEdge(adj,2,3);

   // addEdge(adj,3,3);

    //addEdge(adj,4,0);




//cout<<detect_cycle_by_DFS(adj,v,0,visited,-1);
  if(isCyclic_dfs(adj,v,0,visited,recStack))
    cout<<"there is a cycle";
    else
       cout<<"there is no cycle";


return 0;
}

