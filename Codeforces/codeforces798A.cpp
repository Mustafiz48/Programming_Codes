#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=0,k,l,m;
    char s[16];
    vector<char>h1;
    vector<char>h2;
    gets(s);
    l=strlen(s);
    if((l==1)||((l==2)&&(s[0]!=s[1])))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    m=l/2;
    for(i=0; i<m; i++)
        h1.push_back(s[i]);

    for(i=l-m; i<l; i++)
    {
        h2.push_back(s[i]);
    }
    vector<char>h3;
    for(i=h2.size()-1; i>=0; i--)
        h3.push_back(h2[i]);

    if(h1==h3)
    {
        if((l%2)!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    else
    {

        for(i=0; i<h1.size(); i++)
        {
            if(h1[i]!=h3[i])
                j++;
        }

        if(j==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
