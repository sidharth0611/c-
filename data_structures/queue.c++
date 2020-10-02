#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *front=0, *rear=0;
void enqueue(int x)
{
    struct node *newnode;
    newnode = new node;
    newnode->data = x;
    newnode->next=0;
    if(front==0 && rear==0)
    {
        front = rear =newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void display()
{
    struct node *temp;
    temp = front;
    while(temp!=0)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

void dequeue()
{
    struct node *temp;
    temp = front;
    front = front->next;
    free(temp);
}

void peek()
{
    cout<<front->data<<endl;
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    peek();
    display();
    return 0;

}