#include<bits/stdc++.h>
using namespace std;
int n,weight[123456],price[123456],cap,result;
int dp[50][50];

int knapsack(int i,int wt)
{
    int profit1,profit2;
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
    cout<<"Enter no. of objects:"<<endl;
    cin>>n;
    cout<<"Enter weight with price:"<<endl;
    for(int i=0;i<n;i++)
    {

        cin>>weight[i]>>price[i];
    }

    cout<<"enter capacity of bag:"<<endl;
    cin>>cap;
    result=knapsack(0,0);
    cout<<result;




    return 0;
}
