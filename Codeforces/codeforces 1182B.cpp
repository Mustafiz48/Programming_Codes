#include<bits/stdc++.h>
using namespace std;
char arr[500][500];
int visit[500][500];
int pluses;
pair<int, int>position;
int h,w;

void dfs(int i,int j)
{
    if(visit[i][j]==0)
    {
        if(i<h-1){
        if(arr[i+1][j]==1 && j==position.second )
        {
            visit[i][j]=1;
            dfs(i+1,j);
        }}
        if(i>0){
        if(arr[i-1][j]==1 && j== position.second)
        {
            visit[i][j]=1;
            dfs(i-1,j);
        }}
        if(j<w-1){
        if(arr[i][j+1]==1 && i== position.first)
        {
            visit[i][j]=1;
            dfs(i,j+1);
        }}

        if(j>0){
        if(arr[i][j-1]==1 && i== position.first)
        {
            visit[i][j]=1;
            dfs(i,j-1);
        }}
    }




}





int main()
{

    cin>>h>>w;

    for(int  i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            char c;
            cin>>c;
            if(c=='*')
            {
                arr[i][j]=1;
            }
        }
    }

    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(arr[i][j]==1)
            {
                if(i!=0 && i!=h-1 && j!=0 && j!=w-1)
                {
                    if(arr[i+1][j]==1 &&arr[i-1][j]==1 && arr[i][j-1]==1 && arr[i][j+1]==1 )
                    {
                        ++pluses;
                        position.first=i;
                        position.second=j;
                    }
                }

            }

        }
    }

    if(pluses!=1)
        {
            cout<<"NO"<<endl;
            return 0;

        }
    else
    {

        dfs(position.first,position.second);
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
            {
                if(arr[i][j]==1 && visit[i][j]==0)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }

        cout<<"YES"<<endl;


    }














    return 0;
}
