#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,m=0,k=0;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);


    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            for(m=0; m<n; m++)
            {

                if((i!=j)&& (m!=j)&&(i!=m))
                {
                    if(((a[i] + a[m])>a[j])&&((a[j] + a[i])>a[m])&&((a[j] + a[m])>a[i]))
                    {
                        cout<<"YES"<<endl;
                        k=1;
                        break;
                    }
                    if(k==1)
                        break;
                }
            }

            if(k==1)
               break;
        }
        if(k==1)
            break;
    }
    if(k==0)
        cout<<"NO"<<endl;

    return 0;
}
