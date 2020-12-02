/* In this program, he frnt and bck may be a little bit replaced. 
the scenerio here is

| | | |frnt| | |bck| | | 

This is the structure before any circulation */

#include<bits/stdc++.h>
using namespace std;
int maxsize=10;

class Queue{
    int que[10],frnt,bck;

public:
    Queue(){
        frnt=-1;
        bck=-1;
    }

    bool full()
    {
        if(frnt==0 && bck==maxsize-1)
            return true;
        else if (frnt==bck+1)
            return true;
        else
            return false;
    }
    void enqueue(int n)
    {
        if(!full())
        {
            if(frnt==-1)
            {
                frnt++;
            }
//            bck++;
            bck= (bck+1) % maxsize;
            que[bck]=n;
            cout<<endl<<"queued: "<<n<<endl;

        }
        else
            cout<<"The queue size is at max. no more enqueue!"<<endl;

    }

    bool empt()
    {
        if(frnt==-1)        //Queue will only be empty at first (i.e before insertion) or
                            //after dequeuing the last element (when again both frnt and bck are set to initial state(i.e -1)
            return true;
        else
            return false;

    }
    int dequeue()
    {
        if(!empt())
        {
            int qued=que[frnt];

            if(frnt==bck)
            {
                frnt=-1;
                bck=-1;
            }
            else
            {
                frnt++;
                frnt= frnt % maxsize;
            }

            return qued;
        }

        else
        {
            cout<<"The queue is empty! [returning random value as Deq]"<<endl;
            cout<<frnt<<" "<<bck;
            return -1;
        }
    }

    void show()
    {
        cout<<"Queue state:"<<endl;
        if(!empt())
        {
            int i;
            for(i=frnt; i!=bck;i=(i+1)%maxsize) //will print one before the last element in circular
            {
                cout<<que[i]<<" ";
            }
            cout<<que[i]; //for the last element
            cout<<endl;
        }
        else
            cout<<"empty!"<<endl;


    }
};




int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(5);
    q.enqueue(9);
    q.enqueue(3);
    q.show();
    cout<<"Deq:"<<q.dequeue()<<endl;
    q.show();
    q.enqueue(10);
    q.enqueue(10);
    q.enqueue(10);


    q.show();
    cout<<"Deq:"<<q.dequeue()<<endl;
    cout<<"Deq:"<<q.dequeue()<<endl;
    cout<<"Deq:"<<q.dequeue()<<endl;
    cout<<"Deq:"<<q.dequeue()<<endl;
    cout<<"Deq:"<<q.dequeue()<<endl;
    cout<<"Deq:"<<q.dequeue()<<endl;
    cout<<"Deq:"<<q.dequeue()<<endl;
    cout<<"Deq:"<<q.dequeue()<<endl;
    cout<<"Deq:"<<q.dequeue()<<endl;
    cout<<"Deq:"<<q.dequeue()<<endl;
    q.enqueue(3);
    q.enqueue(3);
    q.enqueue(3);
    q.enqueue(3);
    q.enqueue(3);
    q.enqueue(3);
    q.enqueue(3);
    q.enqueue(3);
    q.enqueue(3);
    q.enqueue(3);
    q.enqueue(3);
    q.enqueue(3);
    cout<<"Deq:"<<q.dequeue()<<endl;
    cout<<"Deq:"<<q.dequeue()<<endl;
    q.enqueue(1);

    q.show();

    return 0;
}
