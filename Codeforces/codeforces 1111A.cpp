#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,k,v=0,c=0;
    string a,b;

    cin>>a>>b;

    if(a.size()!=b.size())
        cout<<"No"<<endl;
    else
    {
        for(i=0;i<a.size();i++)
        {

            if(a[i]=='a'||a[i]=='o'||a[i]=='e'||a[i]=='i'||a[i]=='u')
                v++;
            if(b[i]=='a'||b[i]=='o'||b[i]=='e'||b[i]=='i'||b[i]=='u')
                c++;

        }

        if(v!=c)
            {
                cout<<"No"<<endl;
                return 0;
            }

        else
        {


        for(i=0;i<a.size();i++)
        {

            if((a[i]=='a'||a[i]=='o'||a[i]=='e'||a[i]=='i'||a[i]=='u')&&(!(b[i]=='a'||b[i]=='o'||b[i]=='e'||b[i]=='i'||b[i]=='u')))
            {
                    cout<<"No"<<endl;
                    return 0;
            }
            else
                continue;
        }
        cout<<"Yes"<<endl;
    }

    }











    return 0;
}
