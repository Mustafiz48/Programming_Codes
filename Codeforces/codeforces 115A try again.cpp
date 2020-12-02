#include<bits/stdc++.h>
using namespace std;

vector<int> graph[123456];
int no[123456];
int arr[123456];
int arr2[123456];
int cnt=1;


void dfs(int a)
{
//    if(no[a]==0)
//        no[a]=cnt;

//    cout<<a<<"haahaahaaa"<<no[a]<<endl;
    for(int i=0;i<graph[a].size();i++)
    {
        no[graph[a][i]]=no[a]+1;
//        cout<<"ula"<<a<<" "<<arr[a]<<" "<<graph[a][i]<<" "<<no[graph[a][i]]<<" "<<endl;

    }

    for(int i=0;i<graph[a].size();i++)
    {
        dfs(graph[a][i]);

    }
}




int main()
{
    int n;
    cin>>n;

//    int arr[n+1];

    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
        arr2[i]=a;
        if(a!=-1)
        {
            graph[a].push_back(i);
        }
    }

    for(int i=1;i<=n+1;i++)
    {
        if(arr[i]==-1)
        {
            no[i]=0;
        }
    }
//    cnt++;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==-1)
            dfs(i);
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]!=-1)
            dfs(i);
    }

//    cnt++;

//    while(1)
//    {
//        if()
//    }

//    cout<<"blaablaablaa"<<endl;
//    sort(no,no+n+2);
//    for(int i=1;i<=n;i++)
//        cout<<i<<" "<<no[i]<<endl;
//
    cout<<*max_element(no, no + n+2)+1<<endl;
    return 0;
}
