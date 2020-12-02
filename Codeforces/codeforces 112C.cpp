#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n,x,y;
    cin>>n>>x>>y;
    long long int sq = sqrtl(double(x));
    if( (sq*sq) + n-1 >= x )
        sq = sq;
    else
        sq = sq + 1;
    cout<<n<<" "<<x<<" "<<y<<" "<<sq<<endl;
    if( (sq + n -1) <= y )
    {
        cout<<sq<<" ";

        for(int i=1;i<n;i++)
        {
            cout<<1<<" ";
        }

    }

    else
    {
        cout<<"-1"<<endl;
    }


    return 0;
}
