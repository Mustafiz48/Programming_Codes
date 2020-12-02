#include<bits/stdc++.h>
using namespace std;
int mem[123456];

int fib(int n)
{
    if(mem[n]!=0)
        return mem[n];
    else
    {
        if(n==1)
            mem[n]=1;
        else if( n==0)
            mem[n]=0;
        else
            mem[n]=fib(n-2)+fib(n-1);


        cout<<mem[n]<<" ";
        return mem[n];
    }
}


int main()
{
    int n;

    cin>>n;
    fib(n);
    return 0;
}
