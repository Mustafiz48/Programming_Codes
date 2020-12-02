/*Solving nCr*/
#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int nCr(int n,int r)
{
    if(r==1)
        return n;
    else if(n==r)
        return 1;
    if(dp[n][r]!=0)
        return dp[n][r];
    else
        {
            dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
            return dp[n][r];
        }
}

int main()
{
    int n,r,result;
    cin>>n>>r;
    result=nCr(n,r);
    cout<<result;
}
