#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int prev;
        bool flag=false;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if((i!=0) && a >= prev)
            {
                cout<<t<<"  "<<n<<" ";
                cout<<"YES"<<endl;
                flag= true;
                break;
            }
            prev= a;
        }

        if(!flag)
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
