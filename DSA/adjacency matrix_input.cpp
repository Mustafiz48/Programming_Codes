#include<bits/stdc++.h>
using namespace std;

int adj[100][100];//as declared outside of main,default value will be 0 to each cell

int main()
{
    int node,edge;
    cout<<"Enter # of nodes and edges:"<<endl;
    cin>>node>>edge;

    for(int i=0;i<edge;i++)
    {
        int node1,node2;
        cin>>node1>>node2;
        adj[node1][node2]=1;
        adj[node2][node1]=1;

    }

    cout<<endl<<"Formed adjacency matrix as bellow:"<<endl;
    for(int i=0;i<node;i++)
    {
        for(int j=0;j<node;j++)
        {
            cout<<adj[i][j]<<"\t";

        }
        cout<<endl;
    }














    return 0;
}
