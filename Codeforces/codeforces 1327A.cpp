#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        bool odd=false,even=false;
        cin>>n>>k;
        if(k%2==0)
        {
            even=true;
        }
        else
            odd=true;

        if(odd)
        {
            if(n%2==0)
            {
                cout<<"NO"<<endl;
            }
//            else
//            {
//                cout<<"YES"<<endl;
//            }
        }

        else
        {
            if(n%2==1)
//            {
//                cout<<"YES"<<endl;
//            }
//            else
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }

        }










    }










    return 0;
}
