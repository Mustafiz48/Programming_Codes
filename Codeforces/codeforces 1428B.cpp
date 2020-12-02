#include<bits/stdc++.h>
using namespace std;
int visit[123456],parent;
queue<int>q;


vector<int>v[1234567];


void dfs( int a)
{
//    cout<<"AAAHAAA  "<<a<<endl;
    visit[a]++;

    for(int i=0; i<v[a].size();i++)
    {
            if(visit[v[a][i]] <= 1 )
                {
                    dfs(v[a][i]);
                }

    }


}


int main()
{

    int t;
    cin>>t;

    while(t--)
    {

        int n;
        cin>>n;

//        for(int i=0; i<n;i++)
//        {
//            v[i].push_back(0);
//        }
        fill(visit, visit+n+1,0);

        for(int i=0; i<n; i++)
        {
            char ch;
            cin>>ch;
            if(ch == '-')
            {
                v[i].push_back((i+1)%n);
                v[(i+1)%n].push_back(i);
            }
            else if(ch == '>')
            {
                v[i].push_back((i+1)%n);
            }
            else if(ch == '<')
            {
                v[(i+1)%n].push_back(i);
            }
        }
        int counter = 0;

//        for(int i=0;i<n;i++)
//        {
//            for(int a=0; a<v[i].size();a++)
//            {
//                cout<<v[i][a];
//            }
//            cout<<endl;
//        }

        for(int i=0;i<n;i++)
        {
            dfs(i);
            if(visit[i] > 1)
                counter++;
            fill(visit, visit+n+1,0);

//            cout<<"LALALALALA"<<endl;
        }
        cout<<counter<<endl;

        for(int i=0; i<n+1; i++)
            v[i].clear();
    }













    return 0;
}
