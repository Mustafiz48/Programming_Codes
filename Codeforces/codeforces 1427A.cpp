#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        int n;
        vector<int> plus_v;
        vector<int> minus_v;

        cin>>n;

        for(int i=0; i<n;i++ )
        {
            int a;
            cin>>a;
            if(a>=0)
                plus_v.push_back(a);

            else
                minus_v.push_back(a);
        }

        sort(plus_v.begin (), plus_v.end(), greater<int> ());
        sort(minus_v.begin (), minus_v.end(), greater<int> ());


        long long int plus_sum = 0;

        for(vector<int> :: iterator it = plus_v.begin(); it != plus_v.end() ;it++)
        {
            plus_sum += *it;
        }

        long long int minus_sum = 0;

        for(vector<int> :: iterator it = minus_v.begin(); it != minus_v.end() ;it++)
        {
            minus_sum += *it;
        }

        if(plus_sum == -minus_sum)
            {
                cout<<"NO"<<endl;
            }

        else
        {
            cout<<"YES"<<endl;

            if(plus_sum>(-minus_sum))
            {
                for(vector<int> :: iterator it = plus_v.begin(); it != plus_v.end() ;it++)
                {
                    cout<<*it << " ";
                }

                for(vector<int> :: iterator it = minus_v.begin(); it != minus_v.end() ;it++)
                {
                    cout<<*it << " ";
                }
                cout<<endl;

            }
            else
            {
                for(vector<int> :: iterator it = minus_v.begin(); it != minus_v.end() ;it++)
                {
                    cout<<*it << " ";
                }

                for(vector<int> :: iterator it = plus_v.begin(); it != plus_v.end() ;it++)
                {
                    cout<<*it << " ";
                }
                cout<<endl;

            }

        }


    }









    return 0;
}
