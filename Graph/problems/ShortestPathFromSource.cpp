#include<bits/stdc++.h>

using namespace std;


void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
       adj[v].push_back(u);


}

bool shortest_bfs(vector<int> a[],int v,int s,vector<bool> &visited,vector<int>&dis,vector<int> &pre,int d)
{
    visited[s]=true;
   dis[s]=0;

   queue<int> q;
   q.push(s);
   while(q.empty()==false)
   {
       int u=q.front();
       q.pop();

       for(int k:a[u])
       {
          if(visited[k]==false)
          {
              visited[k]=true;
              dis[k]=dis[u]+1;
              pre[k]=u;
              q.push(k);
          }

          if(k==d)
            return true;
       }
   }
   return false;
}


void printShortestDistance(vector<int> a[],int v,int s,int d)
{
    vector <bool> visited(v,false);
    vector <int> dis(v,-1);
    vector <int> pre(v,-1);

   if(shortest_bfs(a,v,s,visited,dis,pre,d))
   {




       cout<<"Shortest path length is:";
       cout<<dis[d]<<"\n";
    vector<int> path;
    int temp=d;
    path.push_back(temp);

    while(pre[temp]!=-1)
    {
        path.push_back(pre[temp]);
        temp=pre[temp];
    }
    for(int i=path.size()-1;i>=0;i--)
        cout<<path[i]<<" ";
   }
   else
    cout<<"Given source and destination are not connected";
}

int main()
{
    int v=5;
    vector<int>  adj[v];
    int d=4;
    int s=0;
addEdge(adj,0,1);
addEdge(adj,0,2);
addEdge(adj,2,0);
addEdge(adj,1,2);

addEdge(adj,2,3);

 addEdge(adj,3,3);


addEdge(adj,4,3);


printShortestDistance(adj,v,s,d);

return 0;
}

