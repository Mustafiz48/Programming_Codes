#include<bits/stdc++.h>
using namespace std;
vector<int>v;
set<int>s;
int main()
{
    int m,c,d;
    cin>>m;
    for(int i=0;i<m;i++)
    {

        int a;
        cin>>a;
        v.push_back(a);
        s.insert(a);

    }
    if(s.size()==1)
    {
        cout<<0<<endl;
        return 0;
    }
    vector<int>:: iterator it=v.begin();
    vector<int>:: iterator it2=v.end();

    sort(v.begin(),v.end());
    c=count(v.begin(),v.end(),*it);
    d=count(v.begin(),v.end(),*(it2-1));
    c=c+d;
    cout<<m-c<<endl;

    return 0;


}
