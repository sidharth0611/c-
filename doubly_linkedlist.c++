#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *nextnode;
    struct node *previousnode;
};
struct node *head = NULL;

void insert_beginning(int x)
{
    struct node *newnode;
    newnode = new node;
    newnode->data = x;
    if(head==0)
    {
        head =newnode;
        newnode->previousnode = 0;
        newnode->nextnode =0;
    }
    else
    {
        newnode->nextnode=head;
        head->previousnode=newnode;
        newnode->previousnode=0;
        head=newnode;
    }
}

void insert_end(int x)
{
    struct node *newnode;
    struct node *temp;
    temp=head;
    newnode = new node;
    newnode->data = x;
    while(temp->nextnode!=0)
    {
        temp = temp->nextnode;
    }
    temp->nextnode=newnode;
    newnode->previousnode=temp;
    newnode->nextnode=0; 
}

void insert_pos(int x, int y)
{
    struct node *temp;
    struct node *next_;
    int i=0;
    struct node *newnode;
    newnode = new node;
    newnode->data=x;
    temp=head;
    while(i<y-1)
    {
        temp=temp->nextnode;
        i++;
    }
    next_ = temp->nextnode;
    next_->previousnode = newnode;
    newnode->nextnode= next_;
    newnode->previousnode=temp;
    temp->nextnode=newnode;

}

void del_beginning()
{
    struct node *temp;
    if(head==0)
    {
        cout<<"empty"<<endl;
    }
    else
    {
        temp=head;
        head = head->nextnode;
        head->previousnode=0;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<endl;
        temp = temp->nextnode;
    }
}

int main()
{
    insert_beginning(3);
    insert_beginning(4);
    insert_beginning(5);
    insert_beginning(1);
    insert_end(6);
    insert_pos(9,3);
    del_beginning();
    display();
    return 0;
}