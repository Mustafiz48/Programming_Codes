#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,i,t,j,l=0,c=1,d=0;
    char password[102];

    cin>>n>>t;
    m=n+2;


    char str[1][m][102];

    int len[m];

    for(i=0;i<n;i++)
    {
        scanf("%s",&str[1][i]);
    }
    for(i=0;i<n;i++)
    {
            len[i]=strlen(str[1][i]);
    }

        for(i=0; i<n; i++)
    {

        for(j=i+1; j<n; j++)
        {
            if(len[i]>len[j])
                swap(len[i],len[j]);
        }
    }

    cin>>password;
    k=strlen(password);
    for(i=0; i<n; i++)
    {
        if(l==t)
        {
            if(len[i]<k)
                c=c+5;
            if(len[i]<=k)
                d=d+5;
            l=0;
        }
        if(len[i]<k)
        {
            c++;
            d++;
            l++;
        }
        else if(len[i]==k)
        {
            d++;
            l++;
        }



    }
    cout<<c<<" "<<d<<endl;








    return 0;
}
