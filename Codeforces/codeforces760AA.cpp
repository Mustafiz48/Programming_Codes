#include<bits/stdc++.h>
using namespace std;
int main()

{
    int month,day,i,j,col=0,d=0,p=0;

    cin>>month>>day;

    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        d=31;
    else if(month==2)
        d=28;
    else
        d=30;

    //col=(d+day)/7;
    col=4+(day+7)/7;
    if(month==2)
        cout<<col-1;
    else
        cout<<col;






    return 0;
}
