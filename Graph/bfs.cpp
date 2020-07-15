#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);

}

void BFS(vector<int> a[],int s,vector<bool> &v)
{
 queue<int> q;
q.push(s);
v[s]=true;
while(q.empty()==false)
{
   int u=q.front();
   cout<<"\t"<<u;
   q.pop();

   for(auto k:a[u])
   {
       if(v[k]==false)
       {
         q.push(k);
         v[k]=true;
       }
   }
}
}
void mainBFS(vector<int>a[],int v)
{
    vector<bool>visited(v,false);
    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        BFS(a,i,visited);
    }
}

int main()
{
    int v=7;
    vector<int>  adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,4);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);

    addEdge(adj,7,5);

    mainBFS(adj,v);
return 0;
}
