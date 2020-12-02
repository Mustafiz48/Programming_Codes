#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;


int main()
{
    int i=0,j=0,k=0,m=0,a=0,p=0;

    char s[1001],t[1001],u[100][2];

    cin>>s>>t;

    k=strlen(s);

    for(i=0; i<k; i++)
    {
        if(s[i]==t[i])
            continue;
        else
        {
            u[j][0]=s[i];
            u[j][1]=t[i];
            j++;
        }

    }
    p=j;
    for(i=0; i<=j; i++)
    {
        for(m=i+1; m<=j; m++)
        {
            if(((u[i][0]==u[m][0])&&(u[i][1]!=u[m][1]))||((u[i][1]==u[m][1])&&(u[i][0]!=u[m][0])))
            {

                a=1;
                break;
            }

            else if((u[i][0]==u[m][0])||((u[i][0]==u[m][1])&&(u[i][1]==u[m][0])))
            {
                j--;
                u[m][0]=u[m][1]=0;

            }
        }
    }





    if(a==0)
    {
        cout<<j<<endl;

        for(i=0; i<p; i++)
        {
            if( u[i][0]!=0)

                cout<<u[i][0]<<" "<<u[i][1]<<endl;
        }
    }
    else
        cout<<"-1"<<endl;


    return 0;
}
