#include<bits/stdc++.h>
using namespace std;
long long n,q;
long long a[123456],b[123456];
long long dpa[1234567],dpb[1234567];
long long m,l,r,result;
long long querry2(int i);

long long querry1(int i)
{
        if(i==n)
        {
            dpa[i]=a[i];
            return dpa[i];
        }
        if(dpa[i]!=-1)
            return dpa[i];

        else
        {
            dpa[i]=a[i]+querry2(i+1);
            return dpa[i];
        }


}
long long querry2(int i)
{


        if(i==n)
        {
            dpb[i]=b[i];
            return dpb[i];
        }

        if(dpb[i]!=-1)
            return dpb[i];

        else
        {
            dpb[i]=b[i]+querry1(i+1);
            return dpb[i];
        }
}



int main()
{
    memset(dpa,-1,sizeof(dpa));
    memset(dpb,-1,sizeof(dpb));

    cin>>n>>q;

    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cin>>b[i];


//
//    querry1(1);
//    querry2(1);
    dpa[n]=a[n];
    dpb[n]=b[n];

    for(int i=n;i>0;i--)
    {
        if(i==n)
            continue;
        else
            dpa[i]=a[i]+b[i+1]+dpa[1+i];
    }
    for(int i=n;i>0;i=i-2)
    {
        if(i==n)
            dpb[i]=b[i];
        else
            dpb[i]=dpb[i]+dpa[i+1];
    }

    for(int i=1;i<=q;i++)
    {
//        memset(dpa,-1,sizeof(dpa));
//        memset(dpb,-1,sizeof(dpb));

        cin>>m>>l>>r;
        if(m==1)
            {
                if(r==n)
                    result=dpa[l];
                else
                    result=dpa[l]-dpb[r+1];
                cout<<result<<endl;
            }
        else
        {
            if(r==n)
                result=dpb[l];
            else
                result=dpb[l]-dpa[r+1];
            cout<<result<<endl;
        }

    }

    for(int i=0;i<n;i++)
        cout<<dpa[i]<<"\t"<<dpb[i]<<endl;


    return 0;
}
