#include<bits/stdc++.h>
using namespace std;

int main()
{

//    cout<<char('a'-32)<<endl;
//
//    cout<<'A'-0<<endl;


    string s1,s2;

    cin>>s1>>s2;
    bool flag = true;
    for(int i = 0; i<s1.length(); i++)
    {

        if( (s1[i]-0) > 90 )
            s1[i] = s1[i] - 32;

        if( (s2[i]-0) > 90 )
            s2[i] = s2[i] - 32;


        if(s1[i] < s2[i])
        {
            cout<<"-1"<<endl;
            return 0;
        }

        else if(s1[i] > s2[i])
        {
            cout<<"1"<<endl;
            return 0;
        }

    }


    cout<<"0"<<endl;


    return 0;
}
