#include<bits/stdc++.h>
using namespace std;
int v2[1234567][2]={0};
int main()
{
    long long int n,sum=0;
    vector<int>v;
    set<int>s;

    v.push_back(0);
    cin>>n;

    int arr[n],arr2[n]={0};
    long long int a,vectorsum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum=sum+a;
        arr[i]=a;
        if(a<0)
        {
            if(-a%2!=0)
            {
                if(v2[-a/2][1]==(-a))
                    continue;
                else
                {
                    cout<<"-1"<<endl;
                    return 0;
                }
            }
            else
            {
                if(v2[-a/2][0]==(-a))
                    continue;
                else
                {
                    cout<<"-1"<<endl;
                    return 0;
                }
            }

        }
        else
        {
            if(a%2!=0)
            {
                v2[a/2][1]=a;
            }
            else
            {
                v2[a/2][0]=a;
            }


        }
    }


    if(n%2!=0)
    {
        cout<<"-1"<<endl;
        return 0;
    }


    if(sum!=0)
    {

        cout<<"-1"<<endl;
        return 0;
    }


    sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(i!=0&&sum!=0 && s.count(arr[i])>0)
        {
            cout<<"-1"<<endl;
            return 0;
        }
        else
        {
            s.insert(arr[i]);
        }

        if(sum<0)
        {

            cout<<"-1"<<endl;
            return 0;
        }


        if (sum==0)
        {
            v.push_back(i+1-vectorsum);
            vectorsum=i+1;
            s.clear();

        }
    }


    cout<<v.size()-1<<endl;
    for(int i=1;i<=v.size()-1;i++)
        cout<<v[i]<<" ";
    cout<<endl;











    return 0;
}

