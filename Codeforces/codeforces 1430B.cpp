#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {

        int n,k;

        cin>>n>>k;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        sort(arr, arr+n);

//        for(int i=0;i<n;i++)
//            cout<<arr[i] << "\t";

        long long maxval = arr[n-1];
        int i =n-2;

//        cout<<"Haa"<<maxval;


        while(k--)
        {
            maxval += arr[i];
            i--;

//            cout<<"blabla"<<maxval;

        }

        cout<<maxval<<endl;




    }



    return 0;
}
