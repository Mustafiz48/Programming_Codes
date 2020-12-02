#include<bits/stdc++.h>
using namespace std;
long long n,weight[123456],price[123456],cap,result;
long long dp[500][20000];

long long knapsack(int i,int wt)
{
    long long profit1,profit2;
    if(i>=n)
       return 0;

    if(dp[i][wt]!=-1)
        return dp[i][wt];

    if(weight[i]+wt<=cap)
    {
         profit1=price[i]+knapsack(i+1,wt+weight[i]);
    }
    else
        profit1=0;

    profit2=knapsack(i+1,wt);

    dp[i][wt]= max(profit1,profit2);
    return dp[i][wt];

}


int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>cap;
    cin>>n;

    for(int i=0;i<n;i++)
    {

        cin>>price[i]>>weight[i];
    }

    result=knapsack(0,0);
    cout<<result;




    return 0;
}
