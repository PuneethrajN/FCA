#include <iostream>
using namespace std;
int secondLargest(int n,int arr[])
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            return arr[i+1];
        }
    }
    return -1;

}
int main()
{
    int n=5;
    int arr[n]={1,4,2,5,3};
    cout<<secondLargest(n,arr)<<endl;
    
}

