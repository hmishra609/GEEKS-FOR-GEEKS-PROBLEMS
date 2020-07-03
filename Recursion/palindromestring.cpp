#include<iostream>
//#include<string>
 using namespace std;

bool isPalindrome(string str,int s,int e)
{
    if(str[s]!=str[e])
        return false;

//odd count case
if(s==e)
    return true;

//even case
if(s>e)
    return true;

if(str[s]==str[e])
return isPalindrome(str,s+1,e-1);
}

int main()
{
    string str="";
    cout<<"enter the string to check palindrome";
    cin>>str;
int length=str.length();
    cout<<endl;
    if(isPalindrome(str,0,length-1))
    cout<<str<<" : is palindrome";

    else
        cout<<"This is not Palindrome";
}
