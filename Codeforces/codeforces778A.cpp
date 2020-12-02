#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,m,n;
    char a,b;

   // cin>>n;
   char s[200];
//   gets(s);
    //cin>>s;
    gets(s);
    //cout<<strlen(s);



    vector<string>T;
    T.push_back(s);

    //vector<char>P;

   /* for(i=0;T[i]!='\0';i++)
    {
        cin>>a;
        T.push_back(a);
    }*/
    n=T.size();
    cout<<n;

    /*for(i=0; P[i]!='\0';i++)
    {
        cin>>a;
        P.push_back(a);
    }*/
//    cout<<T;
    /*
    char P[n];
    gets(P);
    int p=strlen(P);

    //puts(P);
    vector<int>W;

    for(i=0;i<n;i++)
    {
        cin>>m;
        W.push_back(m);
    }

    for(i=0;i<n;i++)
    {
        T.erase(T.begin()+W[i]);
        if(T.size()==p)
        {
            for(k=0;k<p;i++)
            {
                if(W[k]!=P[k])
                {
                    break;
                }
            }
            if(k==p)
            {
                cout<<i+1;
            }
        }









    }*/








    return 0;
}
