#include<iostream>
using namespace std;
int card(int n,int arr[])    //card game
{
    int min_sum=1000;
    int currentsum=0;
    for(int i=0;i<n;i++)
    {
        currentsum=currentsum+arr[i];
        if(currentsum<min_sum)
        {
            min_sum=currentsum;
        }
        if(currentsum>0)
        {
            currentsum=0;
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    if(min_sum>0)
    {
        return sum;
    }
     return sum+min_sum*(-2);
}
 
int main()
{
    int n=5;
    int arr[n]={-2,3,-1,-4,-2};
    cout<<card(n,arr);
}