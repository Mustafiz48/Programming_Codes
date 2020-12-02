#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=0,k,l;
    char a[101];

    vector<char>s;
    gets(a);
    l=strlen(a);

    s.assign(a,a+l);



    sort(s.begin(),s.end());

    for(i=0; i<s.size(); i++)
    {
        if(s[i]!=s[i+1])
        {
            ++j;
        }
    }




    if(((j)%2)==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;





    return 0;
}
