/*

**Algo: (Obviously by me :P)
    -count the frequency of each characters
    -map character with its frequency <char,int>
    -sort based of that frequency  //sort a map with it's value
    -find the elements with max frequency //normally the last elements
    -find the elements with low ASCII from max frequencies


*/


#include<bits/stdc++.h>
using namespace std;

int arr[123456];
int check[123456];
int freq[123456];
vector<pair<char,int> >vec;
vector<pair<char,int> >vec2;


bool sortByVal(const pair<char, int> &a,const pair<char, int> &b)
{
    return (a.second < b.second);
}



int main()
{
    string st;

    getline(cin,st);

    for(int i=0;i<st.length();i++)
    {
//        cout<<st[i]-0<<endl;
        arr[st[i]-0]++;
    }


    map<char, int>mp;

    for(int i=0;i<st.length();i++)
    {
        mp.insert(make_pair(st[i],arr[st[i]-0]));
    }

//    map<char,int>::iterator it;
//
//    for(it=mp.begin();it!=mp.end();it++)
//    {
//        cout<<it->first<<" "<<it->second<<endl;
//    }



    map<char,int>::iterator it2;

    for(it2=mp.begin();it2!=mp.end();it2++)
    {
        vec.push_back(make_pair(it2->first,it2->second));
    }

    sort(vec.begin(),vec.end(),sortByVal);

//    int mx=-1;
//    for(int i=0;i<vec.size();i++)
//    {
//        cout<<vec[i].first<<" "<<vec[i].second<<endl;
//    }
    for(int i=vec.size()-1;i>=0;i--)
    {
        if(vec[i].second==vec[vec.size()-1].second)
            vec2.push_back(vec[i]);
    }

//    cout<<vec2.size();

    int mn=9999999;
    char chs;
    int n;

    for(int i=0;i<vec2.size();i++)
    {
        if(vec2[i].first-0<mn)
        {
            mn=vec2[i].first-0;
            chs=vec2[i].first;
            n=vec2[i].second;
        }
    }

    cout<<chs<<" "<<n<<endl;
//    sort(vec.begin(),vec.end(),sortByVal);






    return 0;


}
