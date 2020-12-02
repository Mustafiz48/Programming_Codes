#include<bits/stdc++.h>
using namespace std;
int lsize=0;
struct node
{
    int val;
    node *next;
    node *previous;
};
node *root=new node();

void insertt(int n)
{
    int i,j,k;

    if(lsize==0)
    {
        node *current=new node();

        root->val=n;

        root->next=current;

        current->next=NULL;

        current->previous=root;
        lsize++;

    }


    else
    {
        int i,j,k;

        node *current=new node();

        current=root;

        while(current->next!=NULL)
        {
            current=current->next;
        }

        node *newnode=new node();
        current->val=n;

        newnode->previous=current;

        current->next=newnode;
        newnode->next=NULL;
    }
}


void print()
{
    int i,j,k;

    node *current=new node();
    current=root;

    while(current->next!=NULL)
    {
        current=current->next;
    }

    while(current!=root)
    {

        current=current->previous;

        cout<<current->val<<"\t"<<current<<"\t"<<current->previous<<endl;

    }

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
