#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[26];

    for(int i=0;i<26;i++)
        cin>>a[i];

    set<int>s;

    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        s.insert(a[str[i]-'a']);
    }

    cout<<(*s.rbegin())*str.size()<<endl;



    return 0;
}
