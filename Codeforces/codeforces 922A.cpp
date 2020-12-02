#include<bits/stdc++.h>
using namespace std;

int main()

{
    int i,j,k,x,y,c;

    cin>>x>>y;

    c=y-1;
    if (c==0)
    {
        if(x==0)
        {
             cout<<"Yes"<<endl;
            return 0;
        }
        else
        {cout<<"No"<<endl;
            return 0;}
    }


        k=x-c;

    if(y==0)
        {
            cout<<"No"<<endl;
            return 0;
        }

    if((k%2==0)&&k>=0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;







    return 0;
}
