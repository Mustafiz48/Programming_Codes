/* this priority queue also serves as sorting in descending order. As we have taken the value as it's
priority, so the max priority will be popped first making it a descending orderly sorted  */

#include<bits/stdc++.h>
using namespace std;

vector<int> arr;

void heapify(vector<int>&arr, int i)
{
    // cout<<"haahaahaa"<<endl;
    int l,r,leargest,n;
    l=2*i+1;
    r=2*i+2;

    leargest=i;
    n=arr.size();

    if(l<n && arr[l]>arr[leargest])
    {
        leargest=l;
    }

    if(r<n && arr[r]>arr[leargest])

    {
        leargest=r;
    }

    if(i!=leargest)
    {
        swap(arr[i],arr[leargest]);
        heapify(arr,leargest);

    }


}

void insertit(vector<int>&arr, int n )
{
    cout<<"inserting "<<n<<endl;

    arr.push_back(n);
    int siz=arr.size();
    for(int i=siz/2-1;i>=0;i--)
    {
        heapify(arr,i);
    }

}


void deleteit(vector<int>&arr, int n)
{
    // cout<<"deleting "<<n<<endl;

    int siz=arr.size();
    int dlt;
    for(int i=0;i<siz;i++)
    {
        if(arr[i]==n)
        {
            dlt=i;
            break;
        }


    }

    swap(arr[siz-1],arr[dlt]); //swapping the element with last element


    arr.pop_back(); // removing the last element now


    for(int i=(arr.size()/2)-1;i>=0;i--)
    {
        heapify(arr,i);
    }


}

int extract(vector<int>&arr)
{
      int val=arr[0];

      deleteit(arr,arr[0]);

      return val;
}


int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    for (int i = arr.size()/2-1; i >= 0; i--)
    {
        heapify(arr,i);
    }

    cout<<"Aftr Heapifying:"<<endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

    insertit(arr,10);

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"extracting"<<endl;

    while (arr.size()!=0)
    {
        cout<<'\t'<<extract(arr)<<" ";

    }










    return 0;
}
