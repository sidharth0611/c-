#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head, *tail;

void enqueue(int x)
{
    struct node *newnode;
    newnode = new node;
    newnode->data = x;
    if(head == 0 && tail==0)
    {
        newnode->next=0;
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        newnode->next=head;
        tail=newnode;
    }   
}

void display()
{
    struct node *temp;
    temp =head;
    while(temp->next!=head)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

void dequeue()
{
    struct node *temp;
    temp =head;
    head = head->next;
    tail->next=head;
    free(temp);
}

void peek()
{
    cout<<head->data<<endl;
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();
    display();
    peek();
    return 0;

}