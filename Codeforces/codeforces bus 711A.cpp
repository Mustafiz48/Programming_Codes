#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    bool flag=false;
    cin>>n;
    char seat[n][6];
    for(i=0; i<n; i++)
        for(j=0; j<5; j++)
        {

            cin>>seat[i][j];

        }
    for(i=0; i<n; i++)
    {


            if((seat[i][0]=='O') && (seat[i][1]=='O'))
            {
                cout<<"YES"<<endl;
                seat[i][0]='+';
                seat[i][1]='+';
                flag=true;
                k=1;
                break;
            }
            else if((seat[i][3]=='O')&&(seat[i][4]=='O'))
            {
                cout<<"YES"<<endl;
                seat[i][3]='+';
                seat[i][4]='+';
                flag=true;
                k=1;
                break;
            }



    }
 if(i>=n)
		cout<<"NO";

   else if(flag)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
            {
                cout<<seat[i][j];

            }
				cout<<endl;
        }
    }
    return 0;
}
