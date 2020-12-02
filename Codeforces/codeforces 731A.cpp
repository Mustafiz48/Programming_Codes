#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int c=0,i,j,p=0,k=0;
    char m;

    char a[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

    //cout<<a[3
    char s[100];
    /*for(i=0; s[i]!='\n'; i++)
    {
        cin>>s[i];
        //s.push_back(m);
    }*/
    cin>>s;

    for(j=0; j<strlen(s); j++)
    {
        for(i=0; i<26; i++)
        {
            if(a[i]==s[j])
            {
                int t=0;
                if(i<p)
                {
                    c=i;
                    i=p;
                    p=c;
                    t=1;
                }

                if((i-p)<=13)
                {

                    k=k+(i-p);
                    if(!t)
                        p=i;
                    break;
                }

                else if((i-p)>13)
                {
                    k=k+p+25-i+1;
                    if(!t)
                        p=i;
                    break;
                }



            }



        }
    }
    cout<<k;








    return 0;
}
