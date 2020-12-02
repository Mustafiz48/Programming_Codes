#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,j,m;

    cin>>n>>k;

    m=pow(2,k-1);


    if((n%m)==0)
    {
        for(i=0;i<k-1;i++)
            cout<<2<<" ";
        cout<<n/m<<endl;;


    }
   else
        cout<<"-1"<<endl;






    return 0;
}
