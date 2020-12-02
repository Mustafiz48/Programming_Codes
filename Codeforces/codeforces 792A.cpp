#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<double>re;


   int n,i,j,k=0,m;
    cin>>n;
    int in[n];


    for(i=0; i<n; i++)
    {
        cin>>in[i];
    }
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
        {
            m=abs(in[i]-in[j]);
            re.push_back(m);
            //k++;

        }

    sort(re.begin(),re.end());
//for(i=0;i<re.size();i++)
    cout<<int(re[0]);

    for(i=0;;i++)
    {
        if(re[i]==re[0])
            k++;
        else
            break;
    }
    cout<<" "<<k<<endl;




    return 0;
}
