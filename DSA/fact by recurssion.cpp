#include<bits/stdc++.h>>
using namespace std;


int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);



}

int main()
{
    int i;
    cin>>i;
    cout<<fact(5);


    return 0;
}
