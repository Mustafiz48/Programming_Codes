#include<bits/stdc++.h>

using namespace std;


class node{
    public: int data;
    class node *next;

//    ~node();
};


void add(class node *head, int n)
{

    class node *temp = new node();
    temp=head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->data= n;

    class node* newnode= new node();
    newnode->next = NULL;
    temp->next= newnode;

}


void delete_node(class node* head, int val)
{
    class node* temp = new node();
    class node *prev = new node();

    temp = head;
    prev=temp;

    bool flag=false;
    while(temp->data != val )
    {
        prev=temp;
        if(temp->next == NULL)
        {
            flag=true;
            break;
        }
        temp = temp->next;
    }
    if (flag)
    {
        cout<<"Value  not found!"<<endl;
    }

    if(temp != head)
    {
            prev->next = temp->next;
    }

    else
    {
//        temp=temp->next;

        head->data = temp->next->data;
        head->next = temp->next->next;
        delete(temp->next);
        delete(temp);
        delete(prev);
    }
}



class node* find_Ptr_Of(class node* head, int val )
{
    class node* temp = new node();

    temp = head;

    while(temp->data != val)
    {
        temp = temp->next;
    }

    return temp;
}



void insert_into_ptr(class node* ptr, int val)
{
    class node* temp = new node();
    class node* temp2 = new node();

    temp->data = val;
    temp2 = ptr->next;
    ptr->next=temp;
    temp->next = temp2;
    delete(temp2);
    delete(temp);

}


void delete_frm_ptr( class node* ptr)
{
    class node* temp = ptr;

    ptr->next =ptr->next->next ;


}


void traverse(class node* head)
{
    cout<<"HAAHAAHAA"<<endl;
    class node* temp = new node();
    temp=head;
    while(temp->next != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

int main()
{
    class node *head= new node();

    int n,a;
    cin>>n;
    cin>>a;

    head->data=a;
    class node* newnode= new node();
    newnode->next=NULL;
    head->next=newnode;


    cout<<"blablabla"<<endl;
    cout<< &head << " "<< head <<"    "<<head->next<<endl;


    for(int i=0;i<n-1; i++)
    {
        int b;
        cin>>b;
        add(head, b);
    }

    traverse(head);
    int c;
    cin>>c;
    delete_node(head, c);

    traverse(head);

    add(head, 10);
    traverse(head);


    cout<<"Add after:"<<endl;
    int d;
    cin>>d;

    newnode=find_Ptr_Of(head,d);
    insert_into_ptr(newnode, 13);

    traverse(head);


    cout<<"Delete From:"<<endl;
    cin>>d;

    newnode=find_Ptr_Of(head,d);

    delete_frm_ptr(newnode);


    traverse(head);



}
