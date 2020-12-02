#include<bits/stdc++.h>
using namespace std;
int mod(int p)
{
    if(p==0)
        return 1;
    if(p%2)
    {
        return ((8%10)*mod(p-1)%10);


    }
    else
    {
        long long int c=mod(p/2);
        return ((c%10)*(c%10))%10;

    }
}
int main()
{
    long long int p,q;
    cin>>p;

    q=mod(p);
    cout<<q<<endl;



    return 0;
}
