#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,a;
        cin>>x>>y;
        if(x>=y)
            cout<<"YES"<<endl;
        else if((x%2==0)&&(3*x/2)==y)
            cout<<"YES"<<endl;
        else
        {
            if(x%2==0)
                a=x;
            else
                a=x-1;
            if((3*a/2)<=x)
                cout<<"NO"<<endl;

            else if(((3*a/2)-1)==a)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
            }
        }
    }
//7
//2 3
//1 1
//3 6
//6 8
//1 2
//4 1
//31235 6578234

