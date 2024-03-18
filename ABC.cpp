#include <iostream>
#include<string>
using namespace std;
string countChar(string input1)
{
    int arr[26] = {0};
    for(int i=0;i<input1.length();i++)
    {
        if(input1[i]>='a'&& input1[i]<='z')
        {
            arr[input1[i]-'a']++;
        }
    }
    string res;
    for(int i=0;i<26;i++)
    {
        if(arr[i]>0)
        {
            res+=char('a'+i);
            res+=arr[i]+'0';
        }
    }
    return res;
}
int main()
{
    string input1="abbccdaz";
    cout<<countChar(input1);
}