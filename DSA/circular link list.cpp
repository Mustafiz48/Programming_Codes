#include<bits/stdc++.h>
using namespace std;
int lsize=0;
struct node
{
    int val;
    node *next;
};

node *root=new node();
node *tail;//=new node();

//tail=*root;
//tail->val=NULL;

void insertt(int n)
{
    int i,j,k;
    if(lsize==0)
    {
        node *current=new node();

        root->val=n;
        current->next=NULL;
        root->next=current;
        lsize++;


    }
    else
    {
        int i,j,k;
        node *current=new node();
        current=root;
        //for(i=0;i<lsize;i++)
        while(current->next!=NULL)
        {
            current=current->next;
        }
        node *newnode=new node();

        current->val=n;
        newnode->next=NULL;
        current->next=newnode;
        lsize++;

    }

}

void print()
{
    int i=0,j,k;
    node *current=new node();
    current=root;
    node *tail;//=new node();
    // tail->val=NULL;
    tail->next=root;

    while(i<15)
    {
        cout<<current->val<<"\t"<<current<<"\t"<<current->next<<endl;
        if(current->next==NULL)
            current->next=tail;
        else
            current=current->next;
        i++;
    }
    /*node newnode=new node;
    current->next=newnode;
    newnode->next=NULL;
    */

}







int main()
{
    int i,j,k,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>k;
        insertt(k);
    }

    print();


    return 0;
}
