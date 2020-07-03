#include<iostream>

using namespace std;
bool are_Anagram(char s1[],char s2[])
{
int count1[256]={0};

int i=0;
for(i=0;s1[i]&&s2[i];i++)
{
   count1[s1[i]]++;
   count1[s2[i]]--;

}
if(s1[i]||s2[i])
    return false;
for(i=0;i<256;i++)
    if(count1[i]!=0)
        return false;

return true;
}
int main()
{
char str1[] = "geeksforgeeks";
    char str2[] = "forgeeksgeeks";
    if (are_Anagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each other";

    return 0;

}
