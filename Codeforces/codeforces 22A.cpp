#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;

    vector<signed int>a;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>k;
        a.push_back(k);
    }

    if(a.size()==1)
    {

        cout<<"NO"<<endl;
        return 0;
    }
    sort(a.begin(),a.end());

    for(i=0;i<a.size()-1;i++)
    {
        if(a[i+1]>a[0])
        {
        cout<<a[i+1]<<endl;
        return 0;
        }

    }

    cout<<"NO"<<endl;





    return 0;
}
