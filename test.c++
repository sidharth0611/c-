#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head =NULL;
void insert_begining(int x)
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

int main()
{
    insert_begining(3);
    cout<<"sucesss";
    return 0;
}