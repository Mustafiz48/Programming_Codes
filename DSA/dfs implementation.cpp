#include<bits/stdc++.h>
using namespace std;

int adj[100][100];//as declared outside of main,default value will be 0 to each cell
int color[100];
#define white 1
#define grey 2
#define black 3
int node,edge;

void visitdfs(int x)
{
    color[x]=grey;
    for(int i=0;i<node;i++)
    {
        if(adj[x][i]==1)

        {
            if(color[i]==white)
                visitdfs(i);
        }
    }
    color[x]=black;
    cout<<x<<"\t";


}

void dfs()
{
    for( int i=0;i<node;i++)
        color[i]=white;

    for(int i=0;i<node;i++)
    {
        if(color[i]==white)
            visitdfs(i);
    }

}


int main()
{
//    freopen("input.txt","r",stdin);

    cout<<"Enter # of nodes and edges:"<<endl;
    cin>>node>>edge;

    for(int i=0;i<edge;i++)
    {
        int node1,node2;
        cin>>node1>>node2;
        adj[node1][node2]=1;
        adj[node2][node1]=1;
    }


    dfs();


    return 0;
}

