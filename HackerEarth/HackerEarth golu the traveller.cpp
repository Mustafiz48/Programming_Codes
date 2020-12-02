#include<bits/stdc++.h>
using namespace std;

map<string,string>mp;
map<string,int >visit;
map<string,int >costv;

int n,cost;

int val;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {

    cin>>n;
    int city=n-1;
    for(int i=0;i<city;i++)
    {
        string a,b;
        int c;
        cin>>a>>b>>c;
        cost=cost+c;
        costv.insert(make_pair(b,c));

        mp.insert(make_pair(a,b));
        visit.insert(make_pair(a,0));
//        ++val;
        visit.insert(make_pair(b,0));
//        ++val;
    }
//    map<string,int>::iterator it;
//
//    for(it=mp2.begin();it!=mp2.end();it++)
//    {
//
//        cout<<it->first<<"\t"<<it->second;
//
//    }


    map<string,string>::iterator it1,parent;

    parent=mp.begin();
    bool flag=true,flag2=true;
    visit[parent->first]=1;
    while(flag){
    for(it1=mp.begin();it1!=mp.end();it1++)
    {
            if(parent->second==it1->first)

            {
                if(visit[it1->first]==0)

                {
                    visit[it1->first]=1;
                    parent=it1;
//                    cout<<parent->first<<" ";
                    break;

                }
            }
    }
    if(it1==mp.end())
        flag=false;

    }

    for(map<string,int>::iterator it=visit.begin();it!=visit.end();it++)
    {
        it->second=0;
    }

    cout<<endl<<parent->first<<endl;
    visit[parent->first]++;

    for(int i=0;i<city;i++)
    {

        for(it1=mp.begin();it1!=mp.end();it1++)
        {


                if(parent->second==it1->first)
                if(visit[it1->first]==0)

                {
                    cout<<parent->first<<" "<<parent->second<<" "<<costv[parent->second]<<endl;
                    visit[it1->first]++;

                    parent=it1;

                }

        }


    }
    if(visit[parent->second]==0)
        cout<<parent->first<<" "<<parent->second<<" "<<costv[parent->second]<<endl;

    if(visit[parent->second]==1)
        cout<<cost-costv[parent->first];
    else
        cout<<cost;








    mp.erase(mp.begin(),mp.end());
    costv.erase(costv.begin(),costv.end());
    visit.erase(visit.begin(),visit.end());
    cost=0;

    }


    return 0;
}
