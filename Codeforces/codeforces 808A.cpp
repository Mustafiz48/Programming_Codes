#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,r,q,m,k,l;
    cin>>n;
    r=n;

    for(m=1; ; m++)
    {
        n=n/10;
        if(n==0)
            break;
    }
    //cout<<m<<endl;

    k=m-1;


    p=pow(10,k);
   // cout<<p<<endl;


    q=r%p;
   // cout<<q<<endl;

    cout<<p-q;


    return 0;
}
