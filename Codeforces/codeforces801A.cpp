#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=0,k=0,l;


    char s[101];

    gets(s);
    l=strlen(s);
    if(strlen(s)==0)
    {
        cout<<0<<endl;
        return 0;
    }

    for(i=0; i<strlen(s); i++)
    {
        if(strlen(s)>2)
        {
            if(((s[i]==s[i+1])&&(s[i]==s[i+2]))||((s[0]=='K')&&(s[1]=='K'))||((s[l-1]=='V')&&(s[l-2]=='V')))
                j=1;
        }
        else if(s[i]==s[i+1])
                j=1;

                if((s[i]=='V')&&s[i+1]=='K')
        {
            ++k;
        }

}
if(j)
        cout<<k+1<<endl;
    else
        cout<<k<<endl;




    return 0;
}
