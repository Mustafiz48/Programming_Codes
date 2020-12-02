/*
Follow this link for Understanding better: ( Hoare vs Lomuto )

https://www.geeksforgeeks.org/hoares-vs-lomuto-partition-scheme-quicksort/

*/


#include<bits/stdc++.h>
using namespace std;
int arr[123456];


int partitionit(int l, int r)
{
//    for(int i=l;i<=r;i++)
//    {
//        cout<<arr[i]<<" ";
//    }

//    cout<<endl<<endl<<endl;

        int i=l - 1; //traverse from left
        int j=r + 1; //traverse from right

        int pivot=arr[l];

        /* If we change Hoare’s partition to pick the last element as pivot,
        then the Hoare’s partition may cause QuickSort to go into in an infinite recursion.
        For example, {10, 5, 6, 20} and pivot is arr[high],
        then returned index will always be high and call to same QuickSort will be made. */
        while(1)
        {
//            cout<<"haahaahaa22222"<<endl;

            do{
                i++;
//               cout<<"printing iiiii"<<i<<"\t"<<arr[i]<<endl;

            }while(arr[i]<pivot);

            do{
                j--;
//                cout<<"printing jjjjjjj"<<j<<"\t"<<arr[j]<<endl;

            }while(arr[j]>pivot);

            if(i>=j)
            {
                return j;

            }
            swap(arr[i],arr[j]);
        }

}



void quicksort(int l,int r)
{
    if( l >= r)
        {
            return;
        }

        if(l<r){
            int pi=partitionit(l,r);

        //    cout<<"partition:"<<pi<<endl<<endl;
            quicksort(l,pi);  // with Hoare partition, it must run from l to pi ( not pi-1)
            quicksort(pi+1,r);
        }
}


int main()
{
    int n;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    quicksort(0,n-1);
    cout<<"haahaahaa"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
