#include<bits/stdc++.h>
using namespace std;


void countingsort(int arr[],int n, int place)
{
    int maxelement=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxelement)
            maxelement=arr[i];
    }
    int countarr[maxelement+1]; //counting array
    int outputarr[n];

    for(int i=0;i<=maxelement;i++)
    {
        countarr[i]=0;
    }
    for(int i=0;i<n;i++) //counting the value of repeatation of i and keeping it in i'th position  for example, let say we want to count # 5
                        //in the array. so, whenever we will find 5 in arr (i.e arr[i]) it will increase the count of index
                       // 5 in countarray(i.e countarr[5]
    {
        countarr[(arr[i]/place)%10]++;
    }

    for(int i=1;i<=maxelement; i++)
    {
        countarr[i] += countarr[i-1]; //calculating cumulative sum
    }


    for (int i=0;i<n;i++)
    {
        outputarr[countarr[(arr[i]/place)%10]-1]=arr[i];
        countarr[(arr[i]/place)%10]--;
    }


    for(int i=0;i<n;i++)
    {
        arr[i]=outputarr[i];
    }



}





void radixsort(int arr[], int max, int n)
{
    for(int place=1;max/place>0;place=place*10)
    {
        countingsort(arr,n,place);
    }


    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }


}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    int max=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
            max=arr[i];

    }

    radixsort(arr,max,n);









    return 0;
}
