#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,j=0,k=0,a=0,b=0,counter=0,n=0;

    vector<int>arr;
    vector<int>arr2;

    cin>>n;
    cin>>a;
    j=1;
    for(i=1;i<n;i++)
    {
        cin>>b;
        if(b==a)
        {
            j++;
        }
        else
        {

            arr.push_back(j);
            j=1;
            a=b;

        }

    }
    arr.push_back(j);


    if (arr.size()==2)
    {
        if(arr[0]>=arr[1])
            cout<<arr[1]*2;
        else
            cout<<arr[0]*2;
    }

    else{
    for(i=1;i<arr.size();i++)
        {
            if(arr[i-1]<=arr[i])
                a=arr[i-1];
            else
                a=arr[i];
            if(arr[i]<=arr[i+1])
                b=arr[i];
            else
                b=arr[i+1];
            if(a<=b)
            {
                counter=b;
            }
            else

                counter=a;


            arr2.push_back(counter);
        }


sort(arr2.begin(),arr2.end());

cout<<arr2[arr2.size()-1]*2;
}




    return 0;
}
