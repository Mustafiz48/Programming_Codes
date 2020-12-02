#include<bits/stdc++.h>
using namespace std;

vector<int>graph[123456];

int visited[123456];
queue<int>q;

void bfs()
{
    while(q.size()!=0)
    {
        int m=q.front();
        q.pop();

        if (visited[m]==0)
        {
            for (int i=0;i<graph[m].size();i++)
            {
                if(visited[graph[m][i]]==0)
                    q.push(graph[m][i]);
            }
        }

        visited[m]=1;
        cout<<m<<endl;
        bfs();
    }

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

    q.push(root);
    bfs();




    return 0;
}



//7 6
//0 1
//1 3
//3 4
//4 5
//0 2
//2 6
//0
