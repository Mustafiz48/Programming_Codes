#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,m;
    cin>>n>>m>>k;

    int ar[n];
    vector<int>d;


    for(i=1; i<=n; i++)
    {
        cin>>ar[i];
    }

    for(i=1; i<=n; i++)
    {
        if((ar[i]<=k)&&((i)!=m)&&(ar[i]!=0))
        {

            if(i>m)
                d.push_back(abs(i-m));
            else
                d.push_back(abs(m-i));
        }
    }
    sort(d.begin(),d.end());

    cout<<d[0]*10<<endl;








    return 0;
}
