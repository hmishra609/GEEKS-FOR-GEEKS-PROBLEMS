#include<iostream>
using namespace std;
void printsub(string str,string temp,int index)
{
if(index==str.length())
{
cout<<temp<<" ";
return;
}
printsub(str,temp,index+1);
printsub(str,temp+str[index],index+1);
}
int main()
{
    printsub("ABC","",0);
}
