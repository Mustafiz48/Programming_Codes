#include<bits/stdc++.h>
using namespace std;
int n,k,sum;
int main()
{
    cin>>n>>k;
    int d=n,inc=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
//    cout<<sum<<endl;
    while(sum!=k)
    {
        sum=sum-d-1;
        d=d-1;
        inc++;
    }
    cout<<inc<<endl;
    return 0;
}
