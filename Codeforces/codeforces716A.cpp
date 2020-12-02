#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,t,c=0;
	cin>>n>>t;
	long long int ar[n];
	for(i=0;i<n;i++)
		cin>>ar[i];
	for(i=0;i<n-1;i++)
	{
		if((ar[i+1]-ar[i])<=t)
			++c;
		else if((ar[i+1]-ar[i])>t)
			c=0;

	}

	cout<<c+1;









	return 0;
}
