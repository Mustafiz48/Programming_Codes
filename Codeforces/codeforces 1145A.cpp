#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,counter1=0,counter2=0;
    bool flag=false;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    while(1)
    {


        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]<v[i])
                flag=true;

        }
        if(!flag)
            {
                cout<<v.size();
                return 0;
            }
        flag=false;

        for(int i=0,j=n/2;i<(n/2)-1,j<n-1;i++,j++)
        {
            if(v[i+1]<v[i])
                counter1++;
            if(v[j+1]<v[j])
                counter2++;

        }

        if(counter1>counter2)
            v.erase(v.begin(),v.begin()+n/2);
        else
            v.erase(v.begin()+n/2,v.end());
        n=n/2;
        counter1=0;
        counter2=0;


    }








    return 0;
}
