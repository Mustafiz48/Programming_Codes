#include<bits/stdc++.h>
using namespace std;
int maxsize = 10 ;
int stack_size = 0;

struct stck{
    int top = -1;
    int items[10];
};

bool isfull(stck *s)
{

    if(s->top >= maxsize-1)
        return true;
    else
        return false;
}

void push( stck *s , int data)
{
    if(isfull(s))
    {
        cout<<"The stack is Full!!"<<endl;
        return ;
    }
    else
    {
        s->top++;
        s->items[s->top] = data;
    }
    stack_size++;

}

bool isempty( stck *s)
{
    if(s->top == -1)
        return true;
    else
        return false;
}

void pop( stck *s )
{
    if(!isempty( s ))
    {
        cout<<"Item popped is : " << s->items[s->top] << endl;

        s->top--;
        stack_size--;
    }
    else
        cout<<"Stack is empty!"<<endl;

}

void print_stack( stck *s)
{
    if(isempty(s))
    {
        cout<<"The stack is empty"<<endl;
    }

    for (int i=0 ; i<=s->top; i++ )
        cout<< s->items[i] << "\t" ;
}


int main()
{
    struct stck *s = new stck;

    for(int i=0; i<6 ; i++)
    {
        push(s, i);
    }

    print_stack(s);

    for(int i=0; i<5 ; i++)
    {
        pop(s);
    }

    pop(s);
    pop(s);

    return 0;
}
