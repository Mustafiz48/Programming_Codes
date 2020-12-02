#include<bits/stdc++.h>
using namespace std;

int main()
{

    map<int,char>m;
    m.insert(make_pair(1,'q'));
    m.insert(make_pair(2,'w'));
    m.insert(make_pair(3,'e'));
    m.insert(make_pair(4,'r'));
    m.insert(make_pair(5,'t'));
    m.insert(make_pair(6,'y'));
    m.insert(make_pair(7,'u'));
    m.insert(make_pair(8,'i'));
    m.insert(make_pair(9,'o'));
    m.insert(make_pair(10,'p'));
    m.insert(make_pair(11,'a'));
    m.insert(make_pair(12,'s'));
    m.insert(make_pair(13,'d'));
    m.insert(make_pair(14,'f'));
    m.insert(make_pair(15,'g'));
    m.insert(make_pair(16,'h'));
    m.insert(make_pair(17,'j'));
    m.insert(make_pair(18,'k'));
    m.insert(make_pair(19,'l'));
    m.insert(make_pair(20,';'));
    m.insert(make_pair(21,'z'));
    m.insert(make_pair(22,'x'));
    m.insert(make_pair(23,'c'));
    m.insert(make_pair(24,'v'));
    m.insert(make_pair(25,'b'));
    m.insert(make_pair(26,'n'));
    m.insert(make_pair(27,'m'));
    m.insert(make_pair(28,','));
    m.insert(make_pair(29,'.'));
    m.insert(make_pair(30,'/'));


    char a;
    string s;
    cin>>a;
    cin>>s;
    string::iterator it;
    map<int,char>::iterator it2;
    map<int,char>::iterator it3;

    for(it=s.begin();it!=s.end();it++)
    {
        //cout<<*it;
        for( it2=m.begin();it2!=m.end();it2++)
        {
            it3=it2;
            if(*it==it2->second)
                {
                    if(a=='R')
                        it3--;
                    else
                        it3++;
                    cout<<it3->second;

                }



        }




    }








    return 0;
}
