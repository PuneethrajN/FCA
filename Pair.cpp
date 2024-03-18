#include <iostream>
using namespace std;
 
int pair1(int n,int m, int arr[])
{
    int count=0;
    int Xor;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int count1 =0;
            Xor=arr[i]^arr[j];
            while(Xor!=0)
            {
                if((Xor&1)==1)
                {
                    count1++;
                }
                Xor=Xor>>1;
            }
            if(count1==m)
            {
                count++;
            }
        }
    }
    return count;
}
 
 
int main()
{
    int n=4;
    int m=2;
    int arr[n]={1,4,5,6};
    int res = pair1(n,m,arr);
    cout<<res;
    return 0;
}