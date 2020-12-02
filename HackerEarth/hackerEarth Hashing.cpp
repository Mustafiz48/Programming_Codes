/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
vector<string>name[123456];

int main()
{
	int n,q;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		string s;
		cin>>a>>s;
		name[a].push_back(s);
	}

    cin>>q;

    for(int i=0;i<q;i++)
    {
        int a;
        cin>>a;
        cout<<name[a][0]<<endl;
    }









	return 0;
}
