#include <iostream>
using namespace std;
int lis(int input1, int input2[])  //Longest increasing subsequence
{
    int arr[input1];
    arr[0]=1;
    for(int i=1;i<input1;i++)
    {
        arr[i]=1;
        for(int j=0;j<i;j++)
        {
            if(input2[i]>input2[j] && arr[i]<arr[j]+1)
            {
                arr[i]=arr[j]+1;
            }
        }
    }
    int max;
    for(int i=0;i<input1;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int input1=6;
    int input2[input1]={0,1,0,3,2,3};
    cout<<lis(input1,input2);
}