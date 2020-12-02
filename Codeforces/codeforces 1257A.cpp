#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,x;
        cin>>n>>x>>a>>b;

        if(a>b)
        {
            int temp;
            temp=a;
            a=b;
            b=temp;
        }

        for (int i=0;i<x;i++)
        {

            if(a!=1)
            {
                a=a-1;
                continue;

            }

            else if(b!=n)
            {
                b=b+1;
            }

        }

        cout<<abs(a-b)<<endl;

    }


return 0;
}
