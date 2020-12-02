#include<bits/stdc++.h>
using namespace std;

vector<int>child[123456];
vector<int>vertices;
queue<int>q;
int parent[123456];
int respect[123456];
int root;

void deleter()
{
    while(q.size()!=0)
    {
        int node=q.front();
        q.pop();


                int flag=false;
                if((respect[node]==1) && (child[node].size()==0))
                    vertices.push_back(node);
                else
                {

                for(int i=0;i<child[node].size();i++)
                {
                    if(respect[child[node][i]]==1)
                    {
                        q.push(child[node][i]);
                    }
                    else
                    {
                        flag=true;
                        q.push(child[node][i]);
                    }
                }
                if(node!=root)
                {

                if((respect[node]==1) && (flag==false))
                    vertices.push_back(node);

                }
                }

    deleter();

    }


}




int main()
{

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int p,c;
        cin>>p>>c;
        if(p==-1)
        {
            root=p;
            respect[i]=c;

        }
        child[p].push_back(i);
        parent[i]=p;
        respect[i]=c;
    }

    q.push(root);
    deleter();

    sort(vertices.begin(),vertices.end());

    if(vertices.size()==0)
        cout<<-1;
    else
        for(int i=0;i<vertices.size();i++)
            cout<<vertices[i]<<" ";















    return 0;
}
