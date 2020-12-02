#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left,*right;
};

struct node* createroot(int n)
{
    struct node* root=new node();

    root->data=n;
    root->left=NULL;
    root->right=NULL;
}

void insert(struct node* root,int n)
{
    struct node* newnode=new  node;
    newnode->data=n;
    newnode->left=NULL;
    newnode->right=NULL;

    if(root->data>n)
    {
        root->left=newnode;
    }
    else
    {
        root->right=newnode;
    }

    cout<<"insertion done! "<<n<<endl;


}

void preorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<' ';
    preorder(root->left);
    preorder(root->right);

}

void inorder(struct node* root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int BST(struct node* root,int n)
{
    if(root!=NULL)
    {
        if(root->data==n)
        {
            return n;
        }
        else if(n<root->data)
            BST(root->left,n);
        else if(n>root->data)
            BST(root->right,n);

    }

}

int main()
{
    int n=0;
    struct node* root=createroot(8);
    insert(root,3);
    insert(root,10);
    insert(root->left,1);
    insert(root->left,6);
    insert(root->right,14);
    insert(root->left->right,4);
    insert(root->left->right,7);

    cout<<endl<<endl;
    cout<<"Travarsing in preorder:"<<endl;
    preorder(root); //traverse..

    cout<<endl<<endl;
    cout<<"Travarsing in inorder(should be sorted):"<<endl; //inorder traversing of BST gives sorted array
    inorder(root); //traverse

    cout<<endl<<endl;
    cin>>n;
    int m=BST(root,n);
    if(n==m)
    {
        cout<<"Data Found!"<<endl;
    }
    else
    {
        cout<<"Not Found!"<<endl;
    }


    return 0;
}
