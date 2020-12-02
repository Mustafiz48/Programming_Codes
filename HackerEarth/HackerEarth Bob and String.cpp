#include<bits/stdc++.h>
using namespace std;

int sv[123456];
int tv[123456];
int check[123456];


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        string st;
        cin>>s;
//        cout<<"haahaahaa"<<endl;
//        cout<<s;
        cin>>st;
//        cout<<"baaa"<<sv[3]<<endl;

        for(int i=0; i<s.length();i++)
        {
            sv[s[i]-'a']++;
        }
//        cout<<"haahaa"<<endl;
        for(int i=0;i<st.length();i++)
        {
            tv[st[i]-'a']++;
        }

//        cout<<"haahaa"<<endl;

//        for(int i=0;i<s.length();i++)
//        {
//            cout<<s[i]<<" "<<sv[s[i]-'a'];
//
//        }

        int add=0;

        for(int i=0;i<s.length();i++)
        {
            if(check[s[i]-'a']==0)
            {
                add=add+abs(sv[s[i]-'a']-tv[s[i]-'a']);
                check[s[i]-'a']=1;

            }
        }

        for(int i=0;i<st.length();i++)
        {
            if(check[st[i]-'a']==0)
            {
                add=add+abs(sv[st[i]-'a']-tv[st[i]-'a']);
                check[st[i]-'a']=1;

            }
        }

        cout<<add<<endl;




        memset(sv, 0, sizeof(sv)); //clear buffer
        memset(tv, 0, sizeof(tv)); //clear buffer
        memset(check, 0, sizeof(check)); //clear buffer

    }










    return 0;
}
