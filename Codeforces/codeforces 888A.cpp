#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k,n;
    cin>>n;

    int ar[n];

    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(i=1;i<n-1;i++)
    {
        if((ar[i]<ar[i-1])&&(ar[i]<ar[i+1]) || (ar[i]>ar[i-1])&&(ar[i]>ar[i+1]))
            j++;

    }
    cout<<j<<endl;

}
