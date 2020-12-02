#include<bits/stdc++.h>
using namespace std;
long long n;
set<long long>st;
vector<long long> vc;
int ar[123456789];
long long findgcd(long long a,long long b ){
        long long d,c=b;
        while(c!=0)
        {
            d=c;
            c=a%b;
            a=b;
            b=c;
        }
	    return d;
    }


int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(int i=0;i<n-1;)
    {
        long long r=findgcd(ar[i],ar[i+1]);
        st.insert(r);
        i+=2;
    }
    cout<<"blaaa"<<endl;






    return 0;
}
