#include<bits/stdc++.h>
using namespace std;

int func(int a,int b)
{
    for(int i=2;i<=(a/2);i++)
    {
        if((a%i)==0 && (b%i)==0)
            return 0;
    }

    return 1;

}


int main()
{

    int n,a,b,i,j,k;

    cin>>n;
    if((n%2)==0)
    {
        //cout<<(n/2)-1<<" "<<(n/2)+1<<endl;

        for(int i=1;;i++)
        {
            a=(n/2)-i;
            b=(n/2)+i;

            if(func(a,b))
            {
                cout<<a<<" "<<b<<endl;
                return 0;
            }

        }

    }
    else
    {
        for(int i=0;;i++)
        {
            a=(n/2)-i;
            b=(n/2)+i+1;

            if(func(a,b))
            {
                cout<<a<<" "<<b<<endl;
                return 0;
            }

        }
    }



    return 0;
}

