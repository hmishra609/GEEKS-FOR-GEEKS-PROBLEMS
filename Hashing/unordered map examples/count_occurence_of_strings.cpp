#include<sstream>
#include<iostream>
#include<unordered_map>

using namespace std;

void count_freq(string str)
{
unordered_map <string,int> um;

stringstream ss(str);
string temp;

while(ss>>temp)
        um[temp]++;

//for(pair<string,int> i:um)
    //or
//for(auto i:um)
 // cout<<i.first<<"->"<<i.second<<endl;

unordered_map<string,int>::iterator i;

for(i=um.begin();i!=um.end();i++)
{
    cout<<i->first<<"->"<<i->second<<endl;
}

}
int main()
{
string str="geeks f geeks f geeks quiz practice quiz";
count_freq(str);
}
