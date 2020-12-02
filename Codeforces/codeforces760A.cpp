#include<bits/stdc++.h>
using namespace std;

int main()
{
    int month,day,i,j,col=0,d=0,p=0;

    cin>>month>>day;

    if(month==(1||3||5||7||8||10||12))
        d=31;
    else if(month==2)
        d=28;
    else
        d=30;
    if(d!=28)
    {

        col=d/7;
        p=d%7;
        if(p!=0)
        {
            if((7-day)>=(p-1))
                col=col+1;
            else
                col=col+2;
        }
    }
    else
    {
        p=7-day+1;
        col=(d-p)/7;
        if((d-p)%7!=0)
            col=col+2;
            else
                col=col+1;
    }

    cout<<col;










    return 0;
}
