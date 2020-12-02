#include<bits/stdc++.h>
using namespace std;
long long n;
set<long long>s;

int main()
{
    int f=1;
    cin>>n;

    for(long long  i=1;i<=(long long)sqrt(n);i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert((long long)(n/i));
        }
    }
    while(1)
    {
        for(long long i=2; i*i<=*s.rbegin();i++)
        {
            if((*s.rbegin()%(i*i))==0)
            {

                f=0;
                break;
            }

        }


        if(f==1)
        {
            cout<<*s.rbegin();
            return 0;
        }

        s.erase(*s.rbegin());
        f=1;

    }


    return 0;
}
