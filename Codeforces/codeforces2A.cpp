#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,m,n;


    cin>>n;
    char a[n][32];
    int b[n];


    for(i=0; i<n; i++)
    {




        gets(a[i]);

        cin>>b[i];
        if(i)
        {

            for(j=0; j<i; j++)
            {
                if(a[i]==a[j])
                    b[j]=b[j]+b[i];


            }
        }


    }

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<"\t"<<b[i]<<endl;
    }






    return 0;
}
