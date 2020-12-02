#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k=0,n,b,m=0;

    vector<int>a;

    cin>>n;

    for(i=0;i<n;i++)
    {

        cin>>b;
        a.push_back(b);

    }
    i=a[0];j=a[1];
    int n1=n;
    for(i=0,j=1;i<n;i++,j++)
    {
        if(i==(n-1))
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(a[i]<a[j])
        {
            if(k==0)
            {
                continue;
            }
            else
            {

                cout<<"NO"<<endl;
                return 0;
            }
        }

        else
        {
            k=1;
            if(a[i]>a[j])
                m=1;
            else if(a[i]=a[j])
                {
                    if(m==1)
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
            continue;
        }







    }





    return 0;
}
