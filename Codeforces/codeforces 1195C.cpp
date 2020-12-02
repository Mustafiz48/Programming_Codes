#include<bits/stdc++.h>
using namespace std;

long long  dp[2][123456];

long long  row[2][123456];
vector<long long >profit;
long long  n,maxim=0;
long long  inrow;
long long  max_height(bool rw,long long  i)
{
    if(i>n)
        return 0;

    if(dp[rw][i]!=0)
        return dp[rw][i];

    long long  maxii=0;
    for(long long  j=i+1;j<=n+1;j++)
    {
        long long  pr=max_height(!rw,j);
        if (pr>maxii)
        {
            maxii=pr;
        }
    }

    dp[rw][i]=row[rw][i]+maxii;
    return dp[rw][i];
}




int  main()
{
    cin>>n;

    for(long long  i=1; i<=n ;i++)
    {
        scanf("%d",&row[0][i]);
//        cin>>row[0][i];
    }

    for(long long  i=1; i<=n ;i++)
    {
        scanf("%d",&row[1][i]);

//        cin>>row[1][i];
    }
    long long  parrol=0;

//    for(int i=1;i<=n;i++)
//    {
//        long long  result1=max_height(0,i);
//        long long  result2=max_height(1,i);
//        if(result1>result2)
//        {
//            if(result1>parrol)
//            {
//                parrol=result1;
//            }
//        }
//        else
//        {
//            if(result2>parrol)
//            {
//                parrol=result2;
//            }
//        }
//
//
//
//    }



    for(long long  i=0;i<2;i++)
    {
        for(long long  j=n;j>=1;j--)
        {
            long long  result=max_height(i,j);
            if(result>=parrol)
            {
                parrol=result;
            }

        }
    }
    cout<<parrol<<endl;





    return 0;
}
