/* the solution is pretty easy. Just check if the square is in the middle (2x2) matrix or not.

If it is then no, else it will be yes" . Match with the given example of (4x4)


*/


#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,x,y;


    cin>>n>>x>>y;

    int m = n/2;

    if( (x == m &&  y == m) || (x == m &&  y == m+1) || (x == m+1 &&  y == m) || (x == m+1 &&  y == m+1) )
    {
        cout<<"NO"<<endl;
    }

    else
    {
        cout<<"YES"<<endl;
    }








    return 0;
}
