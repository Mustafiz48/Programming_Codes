#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,a,sum=0,sum2=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        sum=sum+a;
    }


    for(i=0;i<n-1;i++)
    {
        cin>>a;
        sum2=sum2+a;
    }
    cout<<sum-sum2<<endl;
    sum=sum2;
    sum2=0;
    for(i=0;i<n-2;i++)
    {
        cin>>a;
        sum2=sum2+a;
    }

    cout<<sum-sum2;




    return 0;
}
