
/*Solved by Kayes*/


#include<bits/stdc++.h>
using namespace std;
struct coor
{
    int x,y,ds;
};
coor arr[102];
int main()
{
    int n,i,j,k;
    bool flag;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i].x>>arr[i].y;
        arr[i].ds=i;
    }
    while(1)
    {
        flag=false;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i].x==arr[j].x || arr[i].y==arr[j].y)
                {
                    if(arr[i].ds!=arr[j].ds)
                    {
                        for(k=0;k<n;k++)
                            if(arr[k].ds==arr[j].ds)
                                arr[k].ds=arr[i].ds;
                        flag=true;
                    }
                }
              //   cout<<"yo3"<<endl;
            }
            // cout<<"yo2"<<endl;
        }
        //cout<<"yo"<<endl;
        if(!flag)
            break;
    }
    int counter[n],ans=0;
    for(i=0;i<n;i++)
        counter[i]=false;
    for(i=0;i<n;i++)
        counter[ arr[i].ds ] = true;
    for(i=0;i<n;i++)
        if(counter[i])
            ans++;
    cout<<ans-1;
}















