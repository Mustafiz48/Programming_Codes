#include<bits/stdc++.h>
using namespace std;

vector<int>graph[123456];
int visited[123456];
int color[123456];


void dfs(int a)
{
        color[a]=1;   //color is set to check if the node was visited previously
        for(int i=0;i<graph[a].size();i++)
        {
            if(visited[graph[a][i]]==0 && color[graph[a][i]]==0)
            {
                dfs(graph[a][i]);
            }

        }
        visited[a]=1;
        cout<<a<<" "<<endl;
}

int main()

{
    int node,edge,root;

    cin>>node>>edge;

    for(int i=0;i<edge;i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    cin>>root;

    dfs(root);




    return 0;
}
