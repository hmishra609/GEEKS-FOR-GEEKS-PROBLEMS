#include<iostream>
using namespace std;
#include<unordered_set>

int main()
{
  unordered_set <string> stringset ;

  stringset.insert("code");
  stringset.insert("in");
  stringset.insert("c++");
  stringset.insert("is");
  stringset.insert("fast");

  string x="code";

  if(stringset.find(x)==stringset.end())
  cout<<x<<" not found"<<endl<<endl;

  else
    cout<<"Found"<<x<<endl<<endl;

    string y="coe";

  if(stringset.find(y)==stringset.end())
  cout<<y<<" not found"<<endl<<endl;

  else
    cout<<"Found"<<y<<endl<<endl;

unordered_set<string>::iterator it;
cout<<"all elements are"<<endl;
for(it=stringset.begin();it!=stringset.end();it++)
    cout<<*(it)<<" ";
    return 0;
}
