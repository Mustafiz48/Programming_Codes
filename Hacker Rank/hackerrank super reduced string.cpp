#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=0,k;
    string a;
    //stack<char> b;
    string b;

    //queue<char>q;

    stack<char>s;


    cin>>a;
//    cout<<s.size();

    for(i=0;i<a.size(); i++)
    {
        if(s.size()==0)
            s.push(a[i]);
        else if(a[i]==s.top())
        {
            s.pop();
            //continue;
        }
        else
            s.push(a[i]);
    }

    if(s.size()==0)
    {
        cout<<"Empty String"<<endl;
        return 0;
    }

    else
    {
        while(s.size()!=0)
        {
            b+=s.top();
            s.pop();
            //j++;
        }

       /* while(b.size()!=0)
        {
            cout<<b.top();
            b.pop();

            //b.push(s.top());
            //s.pop();
            //j++;
        }*/

        cout<<b<<endl;


    }



    return 0;
}

