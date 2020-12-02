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
        int b=n/3;

        if(n%3 == 0)
        {
            cout<<n/3<<" "<<0<<" "<<0<<endl;
            continue;
        }
        else if(n%5 == 0)
        {
            cout<<0<<" "<<n/5<<" "<<0<<endl;
            continue;
        }
        else if(n%7 == 0)
        {
            cout<<0<<" "<<0<<" "<<n/7<<endl;
            continue;
        }
        else
        {
            b=b*3;
            bool flag = false;
            while(b>=0)
            {
                b=b-3;
                if(b>=0)
                {

                if( ((n-b) % 5)== 0)
                {
                  cout<<b/3 <<" "<<(n-b)/5<<" "<<0<<endl;
                  flag = true;
                  break;
                }

                else if(( (n-b) % 7) ==0)
                {
                    cout<<b/3<<" "<<0<<" "<<(n-b)/7<<endl;
                    flag = true;
                    break;

                }
                }
            }

            if(!flag)
                cout<<-1<<endl;


        }






    }







    return 0;
}
