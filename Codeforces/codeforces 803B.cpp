#include<bits/stdc++.h>
using namespace std;
int arr[200008];

int main()

{
    int i,j,k,n,a,b=0,c=0;
    cin>>n;


    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a!=0)
            arr[i]=999999;
        else
            arr[i]=0;

    }


    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(j=1;j<n;j++)
            {


                    if(b==1&&c==1)
                        break;
                    else{
                        if( (i+j==n-1) )
                           b=1;
                        if(i+j<n)
                           if(arr[i+j]==0)
                                b=1;
                        if((i-j<0))
                            c=1;
                        if(i-j>=0)
                            if(arr[i-j]==0)
                            c=1;

                        if(((i-j)>=0) )
                            arr[i-j]=min(j,arr[i-j]);
                        if(((i+j)<n))
                            arr[i+j]=min(j,arr[i+j]);
                        }


            }
            b=0;
            c=0;
        }
        else
            continue;


    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";


    return 0;
}
