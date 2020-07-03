#include<iostream>
#include<unordered_set>
using namespace std;
char find_first(string str)
{


  unordered_set <char> m;
  for(int i=0;i<str.length();i++)
  {
    if(m.find(str[i])!=m.end())
        return str[i];

    else
        m.insert(str[i]);

  }
return '\0';
}
int main()
{
char* str="geksfor";
char c=find_first(str);
if(c!='\0')
    cout<<"First repeating character is "<<c;
else
    cout<<"no character is repeated";
}
