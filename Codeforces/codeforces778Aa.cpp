#include<bits/stdc++.h>
using namespace std;


int main()

{
    int i,j,k;

    char T[20000],P[200000];

    cin>>T>>P;


    cout<<T<<P;
    int t=strlen(T);
    int p=strlen(P);
    k=t;
    int a[t];

    cin>>a;

    for(i=0;i<t;i++)
    {
        if(k>t)
        {
            T[a[i]]=0;
            k--;
        }

        else if (k==t)
        {




        }







    }









    return 0;
}
