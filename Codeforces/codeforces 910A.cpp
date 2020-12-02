#include<bits/stdc++.h>

using namespace std;
//int next,cnt;
//    now=0;

int check( string arr, int nw, int d)
{
//    cout<<"KMFDKF"<<now<<"MF:"<<d<<endl;
//    cout<<arr[now+d]<<endl;
    if(d==0)
    {
        return -1;
    }
    if(arr[nw+d]=='1')
    {
//        cout<<arr<<endl;
//        cout<<now<<" "<<d<<endl;
//        cout<<arr[now+d]<<endl;
        return d;
    }


    else
        return check(arr, nw, d-1);


}

//void go(string s, int d)
//{
//    next=check(s,d);
//    if(next==-1)
//    {
//        cout<<-1<<endl;
//        return;
//    }
//    cnt++;
//    now=now+next;
//    if(now>=)
//    go(s,d);
//}

int main()
{
    int n,d,now=0,next,cnt=0;
    cin>>n>>d;
    string s;
    cin>>s;
//    cout<<s[3]<<endl;
//    go(s,d)
    while(1)
    {
        next=check(s,now,d);
//        cout<<"NEXT"<<next;
        if(next==-1)
        {
            cout<<-1<<endl;
            return 0;
        }
        cnt++;
//        cout<<"now: "<<now<<"next; "<<next<<"now+next"<<now+next<<endl;

        now=now+next;
        if(now>=n-1)
        {
            cout<<cnt<<endl;
            return 0;

        }
//        cout<<"haahaahaa"<<endl;
    }

//    cout<<next<<endl;













    return 0;
}
