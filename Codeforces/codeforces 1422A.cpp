#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;

        cin>>a>>b>>c;

        int big = max(a, max(b,c));

        if(big+1 < (a+b+c))
            cout<<big+1<<endl;
    }





}
