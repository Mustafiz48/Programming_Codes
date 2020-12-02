/* for better understanding, see quick sort tutorial of Tarik Shahriar Shubin in YOutube */


#include<bits/stdc++.h>
using namespace std;

int partitionit(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i,j;

    for(i=low-1,j=low; j< high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[high]);

    return (i+1);
}

void quicksort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pi = partitionit(arr, low, high);

        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }

}

int main()
{
    int arr[100], n;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    quicksort(arr, 0, n-1);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
