#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,d1=0,d2=0;
    cin>>n;

    int a[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(i==j)
                d1=d1+a[i][j];
        }
    }
    j=0;
    for(i=n-1;i>=0;i--)
    {
            d2=d2+a[i][j];
        j++;
    }

   // cout<<d1<<"\t"<<d2;

    int r=d1-d2;

    if(r<0)
        {
            r=0-r;
            cout<<r<<endl;
            return 0;
        }
        else
            cout<<r<<endl;





    return 0;
}
