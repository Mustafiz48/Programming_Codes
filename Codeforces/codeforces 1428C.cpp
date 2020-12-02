#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;

        cin>>s;
        set<char>st;

        for(int i=0;i<s.length();i++)
        {
            st.insert(s[i]);
        }

        if(st.size() == 1 && *st.begin()=='A')
            cout<<s.length()<<endl;
        else if(st.size() == 1 && *st.begin()=='B')
        {
            cout<<s.length()%2<<endl;
        }
        else
        {

        int sz=s.length();
        bool base_flag=false;
        queue<char>q;
        while(true)
        {
            bool flag = false;
            int i=0;
            while(true)
            {
                if(i==s.length()-1)
                {
                    q.push(s[i]);
                    break;
                }
                if(i>= s.length())
                    break;
                if(s[i]=='A' && s[i+1] =='B')
                {
                    i=i+2;
                    flag = true;
                }
                else
                {
                    q.push(s[i]);
                    i++;
                }
            }
            if( sz== q.size() && s[0]=='A')
            {
                cout<<s.length()<<endl;
                base_flag = true;
                break;
            }
            s.erase();
            while(!q.empty() &&!base_flag)
            {
//                cout<<q.front()<<" ";
                s.push_back(q.front());
                q.pop();
            }

//            cout<<s<<endl;

            if(!flag && !base_flag)
            {
                break;
            }


        }

//        cout<<s<<endl;
        if(!base_flag){
        for(int j=0; j<s.length();j++)
        {
            q.push(s[j]);
        }
        }
        vector<char>v1;
//        vector<char>v2;
        while(!q.empty() && !base_flag)
        {
            char ch = q.front();
            q.pop();
            char ch2 ='X';
            if(!q.empty())
            {
                ch2=q.front();
                q.pop();
            }
            if(ch=='B' && ch2=='B')
            {
                continue;
            }
            else
            {
                v1.push_back(ch);
                if(ch2 != 'X')
                    v1.push_back(ch2);
            }
        }
        if(!base_flag)
            cout<<v1.size()<<endl;

//            cout<<q.size()<<endl;
//            while(!q.empty())
//            {
//                cout<<q.front()<<"  ";
//                q.pop();
//            }

    }



    }





    return 0;
}
