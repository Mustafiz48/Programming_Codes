#include<bits/stdc++.h>
using namespace std;
int d,r,k=0;
//int find_mid(int a,int b,int c)
//{
//    if((a>b&&a<c) || (a>c && a<b))
//        return a;
//    else if((b>a && b<c)|| (b>c && b<a))
//        return b;
//    else
//        return c;
//}

void find_result(int a)
{

    if(abs(r-a)<d)
        {
            k=k+(d-abs(r-a));
        }
}



int main()
{
    int a,b,c;
    vector<int>ar;

    for(int i=0;i<3;i++)
        {
            int m;
            cin>>m;
            ar.push_back(m);
        }

    cin>>d;

    sort(ar.begin(),ar.end());

    r=ar[1];

    find_result(ar[0]);
    find_result(ar[2]);

    cout<<k<<endl;






    return 0;
}
