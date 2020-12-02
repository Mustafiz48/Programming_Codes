#include<bits/stdc++.h>

using namespace std;

int main()
{

    int i,j,k,n,n1,a;

    cin>>n>>k>>n1;

    a=ceil(n/n1);
    a=a*2;

    if(a<=k)
        cout<<"YES";
    else if (a>k)
        cout<<"NO";




    return 0;
}
