#include<bits/stdc++.h>
using namespace std;

int add(int n)
{
    return (n*(n+1))/2;
}

int main()
{
    int i,j,k,n,sum=0;

    cin>>n;
    for(i=1;;i++)
    {
        sum=sum+add(i);

        if(sum>n)
        {
            cout<<i-1;
            return 0;

        }



    }

}
