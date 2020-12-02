#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {

        int a;
        cin>>a;
        v.push_back(a);

    }
    vector<int>:: iterator it=v.begin();
    vector<int>:: iterator it2=v.end();

    sort(v.begin(),v.end());
    int c=0;
    for(int i=0;;i++)
    {
        if(v[i]==*it)
            c++;
        else
            break;
    }

    for(int i=v.size();;--i)
    {
        if(v[i]==*it2)
            c++;
        else
            break;
    }

    cout<<m-c<<endl;

    return 0;


}
