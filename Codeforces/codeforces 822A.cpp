#include<bits/stdc++.h>
using namespace std;

 long long int fact(int a)
{

    if(a==0)
        return 1;
    else
        return a*fact(a-1);
}


int main()
{
     long long int a,b,i,j,m,n;

    cin>>a>>b;
    //a=fact(a);
    //b=fact(b);

    if(a<b)
    {
        m=a;
        a=b;
        b=m;
    }

    n=b;

    /*for(i=1; ;i++)
    {

        if((a%b)==0)
        {
            cout<<b;
            break;
        }

        else
        {
            b=n/i;

        }

    }*/

    //cin>>j;
    j=fact(b);
    cout<<j;







    return 0;
}
