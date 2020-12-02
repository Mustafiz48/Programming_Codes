#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k=0;

    char a[27],b[27],c[1001],m;

   /* cin>>a[1];
    cout<<a[1]<<endl;
    a[1]=a[1]-32;
    cout<<a[1]-32<<endl;*/

    gets(a);
    gets(b);
    gets(c);

    for(i=0;i<strlen(c);i++)
    {
        if(c[i]<'A'||(c[i]>'Z'&&c[i]<'a')||c[i]>'z')
            cout<<c[i];
        else
        {
            if((c[i]>='A')&&(c[i]<='Z'))

            {
                c[i]=c[i]+32;
                k=1;
            }
        for(j=0;j<strlen(a);j++)
        {
            if(c[i]==a[j])
            {
                if(k==1)
                {
                    m=b[j]-32;
                    cout<<m;
                    k=0;
                    break;
                }
                cout<<b[j];
                break;


            }
        }

        }


    }










    return 0;
}
