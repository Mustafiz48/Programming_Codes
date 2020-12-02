#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int lemon,apple,pears,l,a,p,result,i,j,r;


    cin>>lemon>>apple>>pears;
    l=lemon;a=apple;p=pears;

    result=pears/4;

    if(result==0)
    {
        cout<<0<<endl;
        return 0;
    }

  while(1)
   {
    pears=4*result;
    apple=2*result;
    lemon=1*result;

    if(apple>a)
        result--;
    else if(lemon>l)
        result--;
    else
        break;
   }

   r=lemon+apple+pears;
   cout<<r<<endl;









    return 0;
}
