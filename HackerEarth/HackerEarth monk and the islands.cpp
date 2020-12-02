#include<bits/stdc++.h>
using namespace std;
int node,edge;

vector<int>graph[123456];
int visit[123456],level[123456];
int parent,child;
queue<int>q;

void bfs()
{

    while(q.size()!=0)
    {
        int a=q.front();

        q.pop();
        if(visit[a]==0)
        {
            for(int i=0;i<graph[a].size();i++)
            {
                if(visit[graph[a][i]]==0)
                    {
//                        cout<<a<<"\t"<<graph[a][i]<<endl;
                        q.push(graph[a][i]);
                        if(level[graph[a][i]]==0)
                        level[graph[a][i]]=level[a]+1;
                    }
            }

//        if(visit[a]==0)
//        {

            visit[a]=1;
//            cout<<a<<" ";
        }
        bfs();


    }
}


int main()
{
    int t,k;
    cin>>t;

    while(t--)
    {

    cin>>node>>edge;

    for(int i=0;i<edge;i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);

    }


//    parent=1;
//    child=parent;
    q.push(1);
    bfs();
    cout<<level[node]<<endl;

//    for(int i=0;i<=node;i++)
//        cout<<i<<" "<<level[i]<<endl;

    for(int i=0;i<=node;i++)
    {
        graph[i].clear();

    }
    memset(visit, 0, sizeof(visit));
    memset(level, 0, sizeof(level));

    }

    return 0;
}

