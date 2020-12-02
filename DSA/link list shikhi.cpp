#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    struct node* next;

};

void add(struct node * head,int n)
{
    cout<<"adding value"<<endl;
    struct node *temp= new node();
    temp=head;

    while (temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->data=n;

    cout<<"aahaaaa"<<endl;

}







int main()
{

    struct node * head= new node();   //defining start node as head

    int n,a;
    cin>>n;
    cin>>a;
    head->data=a; // data of start node i.e head
    struct node * temp= new node();
    head->next=temp;
    for(int i=0;i<n-1;i++)
    {
        int val;
        cin>>val;
        temp->data=val;
        struct node * newnode= new node();  //each time I am creating a temporary new node
        newnode->next==NULL; //primarily next pointer of the temporari new node is null
        temp->next=newnode;  //new temporari node is the next node of previous node

        temp=newnode;

    }

    cout<<"traversing te link list"<<endl;

    struct node * temp2= new node();
    temp2=head;

    while(temp2->next!=NULL)
    {
        cout<<temp2->data<<'\t';
        temp2=temp2->next;

    }
    cout<<temp->data;

    // cout<<"adding value"<<endl;

    add(head, 10);

    cout<<"after adding:"<<endl;
    temp2=head;
    while(temp2->next!=NULL)
    {
        cout<<temp2->data<<'\t';
        temp2=temp2->next;

    }

    cout<<temp2->data; //printing the last value.the while loop will stop at the last node where it will find
                        // the next node as NULL. So it won't print it's value;




    return 0;
}
