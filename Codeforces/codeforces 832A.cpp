#include<bits/stdc++.h>
using namespace std;

int main()
{
   unsigned long long int i,j,k,l,m,n,s;

    cin>>m>>n;

    s=m;

    for(i=1;i<=m;i++)
    {
        s=s-n;


        if(s<n)
        {
            if(i%2!=0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }




    }

    //cout<<"NO"<<endl;







    return 0;
}
