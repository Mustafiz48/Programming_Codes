#include<bits/stdc++.h>
using namespace std;

string s;

int main()
{

    int i,j,k,a,b,c;
    char ch;
    cin>>s;

    a=(s[0]-'0')*10+s[1]-'0';

   // b=(s[3]-'0')*10+s[4]-'0';

    //c=(s[6]-'0')*10+s[7]-'0';
    ch=s[8];

    if(ch=='P')
    {
        if(a==12)
            a=12;
        else
            a=a+12;
    }

    else
    {
        if(a==12)
            a=0;
    }

    if((a/10)==0)
        cout<<0<<a;

    else
        cout<<a;
    for(i=2;i<8;i++)
        cout<<s[i];
    cout<<endl;




    //cout<<endl<<a;












    return 0;
}
