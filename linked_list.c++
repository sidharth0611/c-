#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head =NULL;
void insert_beginning(int x)
{
    struct node *newnode ;
    newnode = new node;
    if(head == 0)
    {
        head = newnode;
        newnode->data = x;
        newnode->next = 0;
    }
    else
    {
        newnode->data = x;
        newnode->next = head;
        head = newnode;
    }
}

void insert_end(int x)
{
    struct node *newnode, *temp1;
    newnode = new node;
    newnode->data = x;
    temp1 =head;
    while(temp1->next!=0)
    {
        temp1 = temp1->next;
    }
    temp1->next = newnode;
    newnode->next=0;
}

void insert_pos(int x, int y)
{
    struct node *temp;
    struct node *newnode;
    newnode = new node;
    newnode->data=x;
    int m=1;
    temp = head;
    while(m<y)
    {
        temp=temp->next;
        m++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void reverse()
{
    struct node *prevnode, *currentnode, *nextnode;
    prevnode=0;
    currentnode= nextnode = head;
    while(nextnode!=0)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode =currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
}

void delete_beginning() //apply logic for end and for pos
{
    struct node *temp;
    temp = head;
    head = head->next;
    free(temp);
}



int display()
{
    struct node *temp;
    int i = 0;
    temp = head;
    while(temp!=0)
    {
        cout<<temp->data<<endl;
        i++;
        temp = temp->next;
    }
    return i;
}

int main()
{
    struct node *temp;
    int g;
    insert_beginning(3);
    insert_beginning(5);
    insert_beginning(9);
    insert_end(7);
    insert_pos(8,2);
    delete_beginning();
    reverse();
    g = display();
    cout<<g;
    return 0;
}
