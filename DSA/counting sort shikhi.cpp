#include<bits/stdc++.h>
using namespace std;

void countingsort(int arr[], int n)
{

    int maxelement=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxelement)
            maxelement=arr[i];
    }
//    cout<<"haahaahaa000"<<endl;

    int countarr[maxelement+1]; //counting array
    int outputarr[n];

    for(int i=0;i<=maxelement;i++)
    {
        countarr[i]=0;
    }
//    cout<<"HAAHAAHAA00000......1111"<<endl;

    for(int i=0;i<n;i++) //counting the value of repeatation of i and keeping it in i'th position  for example, let say we want to count # 5
                        //in the array. so, whenever we will find 5 in arr (i.e arr[i]) it will increase the count of index
                       // 5 in countarray(i.e countarr[5]
    {
        countarr[arr[i]]++;
    }
//    cout<<"HAAHAAHAA"<<endl;


    for(int i=1;i<=maxelement; i++)
    {
        countarr[i] += countarr[i-1]; //calculating cumulative sum
    }
//    cout<<"HAAHAAHAA2222"<<endl;


    for (int i=0;i<n;i++)
    {
        outputarr[countarr[arr[i]]-1]=arr[i];
        countarr[arr[i]]--;
    }


    for(int i=0;i<n;i++)
    {
        cout<<outputarr[i]<<" ";
    }

}



int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    countingsort(arr,n);

//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<' ';
//    }





    return 0;
}
