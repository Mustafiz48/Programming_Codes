#include<bits/stdc++.h>
using namespace std;

vector<char>st;
stack<char>deleted;

stack< pair<int,int> > action;
//stack< pair<int,int> > append;

//stack< pair<int,int> > delet;

//stack<int> Undo;
pair< int, int > p;



void append_it(string s)
{
    int length = s.length();
    p = make_pair(1,length);
    action.push(p); //p.second indicates how many element is appended so that this much element can be deleted while calling Undo

    for(int i=0; i<s.length();i++)
    {
        st.push_back(s[i]);
    }

}

void delete_it(int n)
{
    p =make_pair(2,n);
    action.push(p); //p.second indicates how many element is deleted so that this much element can be added while calling Undo
    int i=1;
    while( i <= n)
    {
        char s = st.back();
        deleted.push(s);
        st.pop_back();
        i++;
    }
}

void print(int n)
{
    cout<<st[n-1]<<endl;
}

void undo()
{
    p = action.top();
    action.pop();

    if(p.first == 1 )
    {
        int n = p.second;

        while(n--)
        {
//            char s = st.back();
//            deleted.push(s);
            st.pop_back();
        }

//        pair<int,int> p_temp;
//        p_temp = make_pair(2, p.second);
//        action.push(p_temp);

    }

    if(p.first == 2)
    {
        int n = p.second;

        while(n--)
        {
            char s = deleted.top();
            deleted.pop();
            st.push_back(s);

        }

    }



}

int main()
{
    int Q;
    cin>>Q;

    while(Q--)
    {
        int t;
        cin>>t;

        if( t== 1)
        {
            string s;
            cin>>s;
            append_it(s);
        }
        else if(t == 2)
        {
            int n;
            cin>>n;
            delete_it(n);

        }
        else if(t ==3)
        {
            int n;
            cin>>n;
            print(n);
        }
        else if(t ==4)
        {
            undo();
        }

    }





    return 0;
}
