#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,m,f,fl,w=0;

    cin>>n>>m;
    for(f=0;f<n;f++)
    {
        int b,a[m*2];
        for(fl=0;fl<2*m;fl++)
        {
            cin>>b;
            a[fl]=b;

        }

        for(i=0;i<m*2;i=i+2)
        {
            if(a[i]==1||a[i+1]==1)
                w++;
        }


    }

    cout<<w<<endl;







    return 0;
}
