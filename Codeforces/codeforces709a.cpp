#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;
int main()
{
	int n,i;

    double b,d,ad=0,rem;
    cin>>n>>b>>d;
    int fruit[n];
    for(i=0; i<n; i++)
    {
        cin>>fruit[i];
    }
    for(i=0; i<n; i++)
    {
        if(fruit[i]>b)
        {

            continue;
        }
        else
            ad=ad+fruit[i];

    }

    if(ad<=d)
        cout<<"0";


    else

    {
        rem=ad/d;
        //rem=remainder(ad,d);
        cout<<(int)rem;
    }







    return 0;
}
