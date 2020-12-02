#include<bits/stdc++.h>
using namespace std;
int main()
{
    int formate,h1,h2,m1,m2,i;
    char tim[6];
    char d;
    cin>>formate;
    for(i=0; i<5; i++)
    {
        cin>>tim[i];
    }
    h1=tim[0]-'0';
    h2=tim[1]-'0';
    m1=tim[3]-'0';
    m2=tim[4]-'0';


    if(formate==24)
    {

        if(h1>2)
            h1=0;
        else if(h1==2 && h2>3)
        {
            h1=0;
        }
        if(m1>5)
            m1=0;
    }
    if(formate==12)
    {
        if(h1>1 && h2!=0)
            h1=0;
        else if(h1>0 && h2==0)
            h1=1;
        else if(h1==1 && h2>2)
            h1=0;
        else if(h1==0 && h2==0)
            h1=1;
        if(m1>5)
            m1=0;
    }
    cout<<h1<<h2<<":"<<m1<<m2;











    return 0;
}
