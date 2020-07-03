#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
   unordered_map<string,int> um;

   um["PI"]=3;
   um["e"]=2;
   um["k"]=4;

   um.insert(make_pair("d",10));

   for(auto i:um)
    cout<<i.first<<" "<<i.second<<endl;
}
