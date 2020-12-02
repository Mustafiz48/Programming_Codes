#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin>>t;

    while(t--)
    {
        long long int x1,y1,x2,y2, sum;

        cin>>x1>>y1>>x2>>y2;

        if(x1 == x2)
        {
            cout<<abs ( y2-y1)<<endl;
        }

        else if( y1 == y2)
        {
            cout<<abs( x2 - x1)<<endl;

        }
        else
        {
            cout<<abs(x2-x1) + abs(y2 - y1) +2<<endl;
        }






    }






    return 0;
}
