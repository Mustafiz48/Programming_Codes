#include<bits/stdc++.h>
using namespace std;

vector<int>graph[200000][1];
vector<int>child[200000];
int cost[123456],depth[123456];
int n;
set<int>s;
queue<int>q;

void bfs()
{
    while(q.size()!=0)
    {
        int node=q.front();
        q.pop();
        for(int i=0;i<child[node].size();i++)
        {
            if(graph[node][i][0]==1)
                cost[child[node][i]]=cost[node]+1;
            else
                cost[child[node][i]]=cost[node]+0;

            depth[child[node][i]]=depth[node]+1;

            q.push(child[node][i]);


        }

        bfs();



    }

}




int main()
{
    cin>>n;

    for(int i=1;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        child[a].push_back(b);
        child[b].push_back(a);
        graph[a][b].push_back(c);
        graph[b][a].push_back(c);

    }
    int counter=0;

    for(int i=1;i<=n;i++)
        {
            q.push(i);
            bfs();
            for(int j=1;j<=n;j++)
            {
                if(depth[j]==cost[j])
                    counter++;
            }
            memset(cost,0,sizeof(cost));
            memset(depth,0,sizeof(depth));

        }

        cout<<counter;







    return 0;
}
