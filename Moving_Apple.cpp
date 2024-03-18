#include<iostream>
using namespace std;
int Apple(int n,int arr[])
{
    int sum=0;
    int avg=0;
    int diff=0;
    int count=0; 
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;

    
    for(int i=0;i<n;i++)
    { 
        if(arr[i]>avg)
        {
            diff=arr[i]-avg;
            count=count+diff;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<Apple(n,arr)<<endl;
}