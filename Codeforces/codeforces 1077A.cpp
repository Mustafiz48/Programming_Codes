

#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,a,b,k,div,res;

cin>>n;
for(int i=0;i<n;i++)
{


    cin>>a>>b>>k;

    if((k%2) !=0)
    {
        div=ceil(k/2);
        res=(a*div)-(b*(k-div));
        cout<<res<<endl;
    }
    else
        {
            res=(a*(k/2))-(b*(k/2));
            cout<<res<<endl;
        }
}
    return 0;
}
