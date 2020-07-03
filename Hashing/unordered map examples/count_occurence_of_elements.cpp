#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;
int main()
{
vector <int> v{1,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4};
unordered_map<int,int> h;

for(auto i=v.begin();i!=v.end();i++)
h[*(i)]++;

int maxe=0,res=0;
for(auto j:h)
{
if(maxe<j.second)
{
    maxe=j.second;
    res=j.first;
}

}
cout<<res<<" has highest occurence";

}
