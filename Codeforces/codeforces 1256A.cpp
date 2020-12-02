#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,n,s;
        cin>>a>>b>>n>>s;



        if((s-(n*a)<=b)&&(s%n<=b))
           cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }






//4
//1 2 3 4
//1 2 3 6
//5 2 6 27
//3 3 5 18




}
