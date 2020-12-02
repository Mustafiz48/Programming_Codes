/*Yeeey!!! It's my Birth Day!!

Happy BirthDay To me!!

Dear Allah, please forgive us and forgive us from Covid-19 virus!
May we all walk again on this planet with a happy face!
Allah, please remove covid-19, please forgive us! */



#include<bits/stdc++.h>
using namespace std;
int arr[1234560];


void heapify (int arr[],int n,int i)
{
    int largest=i; //root element as largest
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && arr[l]>arr[largest]) //left element is the largest
    {
        largest=l;
    }
    if(r<n && arr[r]>arr[largest]) //right element is the largest
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest); // while heapify is not performed on leaf level, say any mid level, then we must recursively
                                //heapify for the bellow levels. the largest value,which  is now left or right will be then used as
                                //root for the next levels
    }


}






void heapsort(int arr[], int n)
{
    for(int i=n/2-1;i>=0;i-- ) //first heapify the entire heap. Heapify is started from the root of leaf nodes That's why we started
                            //from n/2. the nodes after that will certainly be child of other nodes(more specifically
                           //they ill be the leaf nodes)
    {
        heapify(arr,n,i);
    }

    for(int i=n-1;i>0;i--) //perform heapyfi on reduced heap
    {
        swap(arr[i],arr[0]);
        heapify(arr,i,0); //heap size is reduced from n to i (i.e after 1st iteration n-1, after 2nd n-2 and so on
                         //as we have made the heap as max heap on the previous for loop, so we can now proceed from
                        //root to leaf
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

    heapsort(arr,n);


    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}
