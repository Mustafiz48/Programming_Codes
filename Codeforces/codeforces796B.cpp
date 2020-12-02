#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m,f=0,f2=0,a,b,l,l2,c1,c2;

    cin>>n>>m>>k;
    int h[m+2],s[k+2][2],s1[k+2][2];
    for(i=1; i<=m; i++)
    {
        cin>>h[i];
    }
    j=1;
    for(i=1; i<=k; i++)
    {
        cin>>a>>b;
        if(a==1||b==1)
            f2=1;
        //in>>s[i][0]>>s[i][1];
        if(f2==1)

        {
            s[j][0]=a;

            s[j][1]=b;
        }
        j++;

    }
    l=j-1;
    if(s[1][0]==1)
    {
        c1=s[1][0];
        c2=s[1][1];
    }
    else
    {
        c1=s[1][1];
        c2=s[1][0];
    }
    s1[1][0]=s[1][0];
    s1[1][1]=s[1][1];
    j=2;

    for(i=2; i<=l; i++)
    {
        if(s[i][0]==c2)
        {
            s1[j][0]=s[i][0];
            s1[j][1]=s[i][1];
            c2=s[i][1];
        }


        else if (s[i][1]==c2)
        {
            s1[j][0]=s[i][0];
            s1[j][1]=s[i][1];
            c2=s[i][0];
        }
        j++;

    }
    l2=j-1;

    for(i=1; i<=l2; i++)
    {

        for(j=1; j<=m; j++)
        {
            if((s1[i][0]==h[j])||(s1[i][1]==h[j]))

            {
                cout<<h[j]<<endl;
                f=1;
                break;
            }



        }
        if(f==1)
            break;
    }
    if(f2==0)
        cout<<1<<endl;

    else if(f==0)
        cout<<s1[l][1]<<endl;











    return 0;
}
