#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        set<int>s;

        long long int n;

        cin>>n;
        int arr[n];
        bool flag= false;

        for(int i=0; i<n; i++)
        {

            int a;
            cin>>a;

            arr[i] = a;

            s.insert(a);
        }

        while(s.size()!=0)
        {
//            set<int>:: iterator it = s.rbegin();
            long long int val = *(s.rbegin());
            s.erase(val);
            for(int i=0; i<n; i++)
            {
                if(arr[i] ==val )
                {
                    if( (i-1>=0 ) && arr[i-1]<val )
                    {
                        cout<<i+1<<endl;
                        flag= true;
                        break;
                    }
                    else if( ( (i+1)<n ) && arr[i+1]<val )
                    {
                        cout<<i+1<<endl;
                        flag= true;
                        break;
                    }
                 }




//                if( ((i-1)>=0) && arr[i] == val && ( (arr[i-1]< val) || (arr[i+1]<val) ))
//                    {
//                        cout<<i+1<<endl;
//                        flag= true;
//                        break;
//                    }
//
//                else if( ((i+1)<n) && arr[i] == val && ( (arr[i-1]< val) || (arr[i+1]<val) ) )
//                    {
//                        cout<<i+1<<endl;
//                        flag=true;
//                        break;
//                    }
//                else if( (arr[i]==val) && ( (arr[i-1]< val) || (arr[i+1]<val) )  )
//                {
//                        cout<<i+1<<endl;
//                    flag = true;
//                    break;
//                }

            }
            if(flag)
            {
                break;
            }

        }
        if(!flag)
        {
        cout<<-1<<endl;

        }


    }








    return 0;
}
