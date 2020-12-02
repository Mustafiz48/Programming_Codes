#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m,result;
        cin>>h>>m;

        result=((23-h)*60)+(60-m);
        cout<<result<<endl;
    }

    return 0;
}
