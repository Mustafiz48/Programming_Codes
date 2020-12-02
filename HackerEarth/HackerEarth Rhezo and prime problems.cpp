#include<bits/stdc++.h>
using namespace std;
long long n,price[123456],result;
long long dp[5001];

long long knapsack(int i)
{
    long long profit1,profit2;
    if(i>=n)
       return 0;

    if(dp[i]!=-1)
        return dp[i];


    profit1=price[i]+knapsack(i+1);

    profit2=knapsack(i+1);

    dp[i]= max(profit1,profit2);
    return dp[i];

}


int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=1;i<=n;i++)
    {

        cin>>price[i];
    }

    result=knapsack(0);
    cout<<result<<endl;




    return 0;
}
