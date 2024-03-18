#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int adams(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<adams(n);
}