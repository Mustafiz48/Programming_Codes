#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i, ar[100];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    if(ar[n-1]==15)
        cout<<"DOWN";
        else if(ar[n-1]==0)
			cout<<"UP";

    else if(n==1)
        cout<<"-1";

    else if((ar[n-2]-ar[n-1])==-1)
    {
        cout<<"UP";
    }
    else if((ar[n-2]-ar[n-1])==1)
    {
        cout<<"DOWN";
    }











    return 0;
}
