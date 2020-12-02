#include<bits/stdc++.h>
using namespace std;



int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}



int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a;
        bool flag = false;
        int counter = 0;
        cin>>a;
        for(int i=1; i<=a;i++)
            for(int j=1;j<=a; j++)
            if(i != j)
            {
                int p,q,r;
                p=gcd(i,j);
                q= i/(gcd(i,j));
                r= j / gcd(i,j);

                if((p+q)>r &&  (q+r)>p && (r+p)>q )
                    counter ++;
            }

        cout<<counter<<endl;
    }




    return 0;
}
