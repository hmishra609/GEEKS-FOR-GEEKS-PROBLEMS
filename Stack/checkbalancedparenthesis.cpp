#include<bits/stdc++.h>

using namespace std;

bool areParenthesisBalanced(string str)
{
    stack <char>s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
            {
                s.push(str[i]);
                continue;
            }
///at this point stack can't be empty but it have to containing closing braces
        if(s.empty())
            return false;

///handling closing braces
        switch(str[i])
        {
            case ')':
            {
                 char c=s.top();
                 s.pop();
                 if(c=='{'||c=='[')
                        return false;
                    break;
            }//case1
            case '}':
            {
                 char c=s.top();
                 s.pop();
                 if(c=='('||c=='[')
                        return false;
                    break;

            }//case2

             case ']':
            {
                 char c=s.top();
                 s.pop();
                 if(c=='{'||c=='(')
                        return false;
                    break;

            }//case3

        }//switch

    }//for loop

return (s.empty());
}//fun
int main()
{
    string ss="{()}";

if(areParenthesisBalanced(ss))
        cout<<"Balanced";

else
    cout<<"Unbalanced";
return 0;
}
