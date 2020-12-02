#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int x;

        cin>>x;

        int n= x%10;

        int b= 10*(n-1);

        int counter=0;
        while(x!=0)
        {
            x /=10;
            counter++;
        }

        for(int i=1;i<=counter;i++)
            b +=i;

        cout<<b<<endl;


    }








    return 0;
}
