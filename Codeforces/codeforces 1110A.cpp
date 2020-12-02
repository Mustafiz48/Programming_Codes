#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,j,a,b,k;


    cin>>b>>k;

    a=0;

    if (b%2==0)
    {
        for(i=0;i<k;i++)
        {
            cin>>j;
            if(i==k-1)
            {

                if(j%2==0)
                    cout<<"even"<<endl;
                else
                    cout<<"odd"<<endl;
            }
            else
                continue;
        }


    }

    else
    {
        for(i=0;i<k;i++)
        {
            cin>>j;
            if(i==k-1)
            {
                a=a+j;
            }
            else
            {
                if(j%2==0)
                    a=a+2*3;
                else
                    a=a+3*3;

            }

        }

        if(a%2==0)
            cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;
    }



    return 0;
}
