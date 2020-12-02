#include<bits/stdc++.h>
using namespace std;

string s;
int dp[123456],lnth;

void counter(int i)
{
    if(i==0)
    {
        if((s[i]-'0')%2==0)
            dp[i]= 1+dp[i+1];
        else
            dp[i]= 0+dp[i+1];
    }
    else if(i==lnth-1)
    {
        if((s[i]-'0')%2==0)
            dp[i]=1;
        else
            dp[i]=0;
//        return dp[i];
    }
    else
    {


    if(((s[i]-'0')%2)==0)
        dp[i]=1+dp[i+1];
    else
        dp[i]=0+dp[i+1];
    }

    if(i!=0)
        counter(i-1);




}


int main()
{
    cin>>s;
    lnth=s.length();
    long long result;

    counter(lnth-1);
    for(int i=0;i<lnth;i++)
        cout<<dp[i]<<" ";








    return 0;
}
