#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,b=0,i=0,j=0,k=0,r=0,l=0,m=0,ptr=0,c=0;

    char  s[51],s2[51],s3[51];

    gets(s);
    r=strlen(s);


    for(i=0; i<50; i++)
        s2[i]='$';
    for(i=0; i<r; i++)
    {
        if(s[0]!=s[i])
            break;
    }
    if(i==r)
        cout<<1<<endl;


    else
    {
        for(i=0; i<r; i++,m++)
        {
            if(s[i]==s2[0])
            {
                b=1;

                k=i-i;
                j=1;
                for(l=0; l<k; l++)
                {
                    if(s2[l]!=s[l+k])
                    {
                        ptr=1;
                        break;
                    }
                }
                if(ptr==1)
                    break;


            }

            else
            {
                s2[j]=s[i];
                j++;
            }

        }
        if(ptr==0&&b==1)
        {
            a=1;
            cout<<j<<endl;
        }
        if(a==0)
            cout<<r<<endl;
    }











    return 0;
}
