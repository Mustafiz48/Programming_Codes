/*
Soln: Take an array of 2,4,6......4n


    print n numbers from n value in the array. i.e index n-1 (n-1 means n'th number which holds the value n) to (n-1)+n  from the array
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int c=2;
        int n;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n ;i++)
        {
            arr[i]=c;
            c +=2;
        }
        int i=n-1;

        for(int j=0; j<n; j++)
        {
            cout<<arr[i+j]<<" ";
        }
        cout<<endl;


    }


    return 0;
}
