#include<bits/stdc++.h>
using namespace std;
unsigned long long n;

unsigned long long play(int a)
{
    unsigned long long m=0;
    if(a==0)
    {
        if( n%2 == 1)
        {
            m=1;
            n--;
        }
        else
        {
            m=n/2;
            n=n/2;
        }

    }
    else
    {
        if( n%2 == 1)
        {
            n--;
        }
        else
        {
            n=n/2;
        }
    }

    return m;
}


int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        unsigned long long p=0 , a;
        cin>>a;
        n=a;
        while(n!=0)
        {
            p= p + play(0);
            play(1);
        }

        cout<<p<<endl;

    }

    return 0;

}
