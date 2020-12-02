#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,x;
        cin>>n>>x;

        if (n<=2)
        {
            cout<<1<<endl;
        }
        else
        {
            int f =((n-2)/x)+1;
            if(((f-1)*x +2)>= n)
                cout<<f<<endl;
            else if((f*x +2)>= n)
                cout<<f+1<<endl;
            else if(((f+1)*x +2)>= n)
                cout<<f+2<<endl;
        }


    }











    return 0;
}
