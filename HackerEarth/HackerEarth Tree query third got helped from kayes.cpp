#include<bits/stdc++.h>
using namespace std;

int coount[100001],rcount[200001];
long long counter1,counter2;
int main()
{
    int node,edge;
    cin>>node>>edge;
    for(int i=0;i<edge;i++)
    {
        int node1,node2;
        cin>>node1>>node2;
        coount[node1]++;
        rcount[node2]++;
    }

    for(int i=0;i<node;i++)
    {
        if(coount[i]==0)
            counter1++;
        if(rcount[i]==0)
            counter2++;

    }

    if(counter1>counter2)
        cout<<counter1<<endl;
    else
        cout<<counter2++;







    return 0;
}
