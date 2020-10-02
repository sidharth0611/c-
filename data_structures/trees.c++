#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *right;
    struct node *left;
};

struct node *create()
{
    struct node *newnode;
    newnode = new node;
    int x;
    cin>>x;
    if(x == -1)
    {
        return 0;
    }
    newnode->data = x;
    cout<<"left child of"<<x<<endl;
    newnode->left = create();
    cout<<"right child of "<<x<<endl;
    newnode->right = create();
    return newnode;
}

void preorder(struct node *root)
{
    if(root == 0)
    { return ;}
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root)
{
    if(root == 0)
    { return ;}
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

void postorder(struct node *root)
{
    if(root == 0)
    { return ;}
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
}

int main()
{
    struct node *root;
    root = create();
    preorder(root);
    return 0;
}