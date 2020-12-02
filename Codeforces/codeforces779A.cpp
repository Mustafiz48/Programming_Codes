#include<bits/stdc++.h>
using namespace std;

int srch(int s,int n,vector<int>&A);


int main()
{
    int n,i,j,m,t=0,b,a,k;

    cin>>n;

    //int A[n],B[n];
    vector<int>A;
    vector<int>B;

    for(i=0;i<n;i++)
    {
        cin>>a; //A[i]>>B[i];
        A.push_back(a);
        //B.push_back(b);
    }
    for(i=0;i<n;i++)
    {
        cin>>b;
        B.push_back(b);
    }

    sort(A.begin(),A.end());
    //sort(B[0],B[i]);
    sort(B.begin(),B.end());

    /*for(i=0;i<n;i++)
    {
        cout<<A[i]<<"\t"<<B[i]<<endl;
        //cout<<A[i]<<"\t";

        if(A[i]!=B[i])
            t++;



    }*/
    for(i=0;i<n;i++)
    {
        if(srch(A[i],n,B))
        {
            t++;
        }

    }


    cout<<t;











    return 0;
}


int srch(int s,int n,vector<int>&A)
{
    int i,j,k,l;
    //cin>>n;
    int beg=0,en=n,mid=(beg+en)/2;
    /*vector<int> A;
    for(i=0; i<n; i++)
    {
        cin>>k;
        A.push_back(k);
    }

    sort(A.begin(),A.end());

    for(i=0;i<n;i++)
    {
        cout<<A[i]<<"\t";
    }

    cout<<"\nenter search item:"<<endl;
    cin>>s;*/

    for(i=0; ; i++)
    {


        if(A[mid]==s)
        {
            //cout<<"found at index:"<<mid;
            //break;
            return 1;

        }
        else if(s>A[mid])
            beg=mid+1;
        else
            en=mid-1;

        if(beg==en)
        {
           // cout<<"not found"<<endl;
            //break;
            return 0;
        }
        mid=(beg+en)/2;



    }




}
