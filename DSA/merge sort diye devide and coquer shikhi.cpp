#include<bits/stdc++.h>

using namespace std;

int arr[123456];

void mergeit(int arr[],int l,int m,int r)
{
    int n1=m-l+1; //left array size
    int n2=r-m; //right array size

    int temp1[n1];
    int temp2[n2];
    for(int i=0;i<n1;i++)
    {
        temp1[i]=arr[l+i];
    }

    for(int i=0;i<n2;i++)
    {
        temp2[i]=arr[m+i+1];

    }

    int i=0; //index for temp1
    int j=0; //index for temp2
    int k=l; //index for main array

    while(i<n1 && j<n2)
    {
        if(temp1[i]<=temp2[j]) // comparing arrays
        {
            arr[k]=temp1[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=temp2[j];
            j++;
            k++;

        }

    }
    while(i<n1) //copying what's left of array 1
    {
        arr[k]=temp1[i];
        k++;
        i++;

    }
    while(j<n2) // copying what's left of array2
    {
        arr[k]=temp2[j];
        k++;
        j++;
    }



}


void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);

        mergeit(arr,l,m,r); // marging two copies of array

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
    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
