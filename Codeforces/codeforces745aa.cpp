#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b=0,c=0,i=0,j=0,k=0,r=0,l=0,m=0,ptr=0;

    char  s[51],s2[51];
    int a[50];

    gets(s);
    r=strlen(s);
    for(i=0; i<r; i++)
    {
        if(s[0]!=s[i])
            break;
    }
    if(i==r)
        cout<<1<<endl;

    for(i=0; i<r; i++)
    {
        if(s[i]==s[0])
        {
            k=i;
            j++;
        }

    }
    b=j;
    if(j==0)
        cout<<r<<endl;
    else
    {
    for(i=0;i<r;i++)
    {
        if(s[i]!=s[k+i])
        {
            c=1;
            break;
        }
    }

    if(c==1)
        cout<<r<<endl;
    else
            cout<<j<<endl;
    }


return 0;
}
