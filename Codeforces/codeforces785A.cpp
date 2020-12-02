#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,i,j,t=0;


    cin>>l;

    char s[l+1][15];

    for(i=0;i<=l;i++)
    {
        gets(s[i]);
    }

     for(i=0;i<=l;i++)
    {
        if(s[i][0]=='T')
            t=t+4;
        else if(s[i][0]=='C')
            t=t+6;
        else if(s[i][0]=='O')
            t=t+8;
        else if(s[i][0]=='D')
            t=t+12;
        else if(s[i][0]=='I')
            t=t+20;


    }
    cout<<t;

    return 0;








}
