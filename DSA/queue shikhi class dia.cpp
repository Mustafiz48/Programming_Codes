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
        if(bck==maxsize-1)
            return true;
        else
            return false;
    }
    void enqueue(int n)
    {
        if(!full())
        {
            bck++;
            que[bck]=n;
            if(frnt==-1)
            {
                frnt++;
            }
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

            if(frnt>=bck)
            {
                frnt=-1;
                bck=-1;
            }
            else
                frnt++;


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
            for(int i=frnt;i<=bck;i++)
            {
                cout<<que[i]<<" ";
            }
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
    q.enqueue(3);

    q.show();

    return 0;
}
