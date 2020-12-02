#include <bits/stdc++.h>

using namespace std;

multiset<int>s;


int main()
{
    int sum1=0,sum2=0;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }

    multiset<int>::iterator it=s.begin();
    for(int i=0;i<4;i++)
    {
        sum1=sum1+*it;
        it++;

    }
    cout<<sum1<<" ";
    multiset<int>::iterator it2=s.begin();
    it2++;
    sum1=0;
    for(int i=0;i<4;i++)
    {
        sum1=sum1+*it2;
        it2++;

    }
    cout<<sum1;
    return 0;
}
