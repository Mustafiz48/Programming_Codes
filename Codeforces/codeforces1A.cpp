#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n,m,a;

    cin>>n>>m>>a;
    if(a==1)
        cout<<n*m;
    else{

    if(n%a!=0)
        n=(n/a)+1;
    else
        n=n/a;
    if(m%a!=0)
        m=(m/a)+1;
    else
        m=m/a;

    cout<<n*m;

    }






        return 0;
}
