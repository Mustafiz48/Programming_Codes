#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int m,n;

        cin>>n>>m;

        long long int arr[m*n];

        for( int i=0; i<m*n;i++)
        {
            cin>>arr[i];

        }

        sort(arr, arr+(m*n));

        long long int avg = (arr[0] + arr[m*n-1] )/2;

//        cout<<"haahaahaa"<<avg<<endl;

        long long int estimated=0;

        bool flag=false;
        while(1)
        {
            long long int counted=0;

            for(int i=0; i<m*n; i++)
            {
                counted += abs(avg-arr[i]);
//                cout<<"count:"<<counted<<endl;

            }
            avg--;
//            cout<<"AVG: "<< avg<<endl;
            if(!flag)
            {
                estimated = counted;
                flag=true;
            }
//            cout<<"est:"<<estimated<<"  "<<"cnt:"<<counted<<endl;
            if(estimated>=counted)
            {
                estimated=counted;
            }
            else
                break;
        }

        cout<<estimated<<endl;



    }








}
