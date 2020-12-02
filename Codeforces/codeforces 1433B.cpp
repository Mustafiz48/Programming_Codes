#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--)
    {

       int n;
       cin>>n;

       vector<int>arr;

       for(int i=0;i<n;i++)
       {
           int b;
           cin>>b;
           arr.push_back(b);
       }

       vector<int> :: iterator it1 =arr.begin();
       while(*it1!=1)
       {
           it1++;
       }
       vector<int> :: iterator it2 =arr.end();

       while(*it2!=1)
       {
           it2--;
       }

       int counter = 0;

       while( it1 != it2 )
       {
           if(*it1 == 0)
                counter++;
           it1++;
       }

       cout<<counter<<endl;




    }







return 0;
}
