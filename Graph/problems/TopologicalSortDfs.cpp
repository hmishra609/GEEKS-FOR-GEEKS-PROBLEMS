#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);

}

void tpsortfun(vector<int> adj[],int i,vector<bool> &visited,stack<int> &s)
{
    ///mark visited
   visited[i]=true;

///recur for all its adjacent
   for(int k:adj[i])
   {
       if(!visited[k])
            tpsortfun(adj,k,visited,s);
   }


///push current vertex to the stack which stores result
   s.push(i);
}
void topologicalsort(vector<int> adj[],int v)
{
    stack<int> s;
    vector<bool> visited(v,false);
for(int i=0;i<v;i++)
{
    if(!visited[i])
        tpsortfun(adj,i,visited,s);
}

while(s.empty()==false)
{
    cout<<s.top()<<" ";
    s.pop();
}

}


int main()
{
  int  v=6;
vector<int> adj[v];
    addEdge(adj,5, 2);
    addEdge(adj,5, 0);
    addEdge(adj,4, 0);
    addEdge(adj,4, 1);
    addEdge(adj,2, 3);
    addEdge(adj,3, 1);


cout<<"The topological sort of given graph is  \n";
topologicalsort(adj,v);
}
