#include<bits/stdc++.h>
using namespace std;
int max_size = 10;
struct que{
    int frnt = -1;
    int bck = -1;
    int items [10];
};


bool isfull(que *q )
{
    if(q->frnt >= max_size)
        return true;
    else
        return false;
}

void enqueue(que *q , int data )
{
    if (q->bck == -1)
        q->bck = 0;

    if(isfull(q))
        cout<<endl<<"Queue has reached to limit. ( Full! )"<<endl;
    else
    {
        q->frnt++;

        q->items[q->frnt] = data;


    }
}

bool isempty(que *q)
{
    if( q->bck == -1  && q->bck == -1)
        return true;

    else
        return false;
}


void dequeue( que *q)
{
    if(!isempty(q))
    {

        cout<<" Removed : "<< q->items[q->bck];
        if(q->bck == q->frnt)
        {
            q->bck = -1;
            q->frnt = -1;
        }
        else
            q->bck++;

    }
    else
    {
        cout<<"Queue  is empty!"<<endl;
    }


}


void print_queue( que *q)
{
    if(isempty(q))
    {
        cout<<"Queue is empty!"<<endl;
    }
    else
    {

        for( int i= q->bck ; i<=q->frnt ; i++)
        {
            cout<<q->items[i]<<"\t";
        }
    }

}



int main()
{

    struct que *q = new que;

    for(int i=0; i<12; i++)
    {
        enqueue(q, i);
        cout<<"\n";
        print_queue(q);
    }

    cout<<endl<<endl<<"Dequeuing !"<<endl<<endl;;
    for(int i=0; i<12; i++)
    {
        dequeue(q);
        cout<<"\n";
        print_queue(q);
        cout<<endl;
    }





    return 0;
}
