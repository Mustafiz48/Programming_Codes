#include<bits/stdc++.h>
using namespace std;
vector<int>v;
stack<int>s;
int int_size;
void check(int i, int m)
{
    if(v[i]+m > 9)
    {
        v[i] = 0;
        check( i+1, 1);

    }
    else
    {
        v[i]=v[i]+ m;
        return;
    }

}


void interesting()
{
    int sum = 0 ,m,n;
    for(int i=0; i<v.size() ; i++)
    {
        sum= sum + v[i] ;
    }
    n= sum % 4;
    if(n==0)
    {
        return;
    }
    else
    {
        m = 4-n;
        check(0,m );
    }
}

int main()
{
    int a;

    cin>>a;

    while(a!=0)
    {
        int rem = a%10;
        a=a/10;
        v.push_back(rem);
    }

    v.push_back(0);

    interesting();
    interesting();

    int ans = 0;

    int val=1;
    for(int i=0; i<v.size(); i++)
    {
        ans = ans + v[i]*val;
        val=val*10;
    }
    cout<<ans<<endl;
    return 0;
}
