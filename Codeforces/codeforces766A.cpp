#include<bits/stdc++.h>
using namespace std;

int main()

{
    int i,j,a1,b1,k;
    int aa[100];
    int bb[100];
    char a[10^5];
    char b[10^5];
    cin>>a>>b;

    if(strcmp(a,b)==0)
        cout<<-1;

    else
    {
        for(i=0;i<strlen(a);i++)
        {
            if(a[i+1]==(a[i]+1))
            {
                j++;
            }
            else
            {
                aa[a1]=j;
                a1++;
                j=0;
                continue;
            }

        }
        for(i=0;i<strlen(a);i++)
        {
            if(b[i+1]==(b[i]+1))
            {
                k++;
            }
            else
            {
                bb[b1]=k;
                b1++;
                k=0;
                continue;
            }

        }
        for(i=0;i<sizeof(aa)/sizeof(int);i++)
        {
            if(aa[i]>aa[i+1])
                j=aa[i];
        }
        for(i=0;i<sizeof(bb)/sizeof(int);i++)
        {
            if(bb[i]>bb[i+1])
                k=bb[i];
        }
        if(j>k)
            cout<<j;
        else
            cout<<k;








        }














    return 0;
}
