
/* Code is done following the tutorial of the problem. I didn't figure out the solution.*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> vec;

        vector<pair<int, int> > pair_vec;

        int n;

        cin>>n;

        for(int i=1; i<=n;i++)
        {
            vec.push_back(i);
        }

        for(int i=0;i<n-1;i++)
        {
            int a = vec.back();
            vec.pop_back();
            int b = vec.back();
            vec.pop_back();
            pair_vec.push_back(make_pair(a,b));
            vec.push_back(ceil(float(a+b)/2));
        }

        vector<int>:: iterator it= vec.begin();
        cout<<*it<<endl;
        for(int i=0; i<pair_vec.size(); i++)
        {
            cout<<pair_vec[i].first<<" "<<pair_vec[i].second<<endl;

        }








    }









    return 0;
}
