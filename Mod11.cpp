#include<iostream>
using namespace std;
int mod(string str)
{
    int rem=0;
    int n;
    for(int i=0;i<str.length();i++)
    {
        n=rem*10+(str[i]-'0');
        rem=n%11;
    }
    return rem;
}
int main()
{
    string str; 
    cin>>str;
    cout<<mod(str);
}