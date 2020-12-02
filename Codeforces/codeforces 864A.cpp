#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,n=0,m=0,l=0,a;

    cin>>n;
    int c=0,d=0,e=0,w=0,x=0,y=0;

    for(i=0; i<n; i++)
    {
        cin>>a;
        if(c==0)
        {
            c=a;
            w++;
        }
        else if((a!=c)&&(d==0))
        {
            d=a;
            x++;
        }
        else
        {

            if(a==c)
                w++;
            else if(a==d)
                x++;
            else
                e++;

        }
    }
        if((e==0)&&(w==x))
        {
            cout<<"YES"<<endl;
            cout<<c<<" "<<d<<endl;


        }
        else
            cout<<"NO"<<endl;











        return 0;
    }
