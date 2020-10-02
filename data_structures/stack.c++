#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
struct node *top = NULL;

void push(int x)
{
    struct node *newnode;
    newnode = new node;
    newnode->data= x;
    newnode->link = top;
    top = newnode;
}

void display()
{
    struct node *temp;
    temp = top;
    if(top==0)
    {
        cout<<"invalid"<<endl;
    }
    else
    {
        while(temp!=0)
        {
            cout<<temp->data<<endl;
            temp=temp->link;
        }
    }
}

void peek()
{
    if(top==0)
    {
        cout<<"nothin"<<endl;
    }
    else
    {
        cout<<top->data<<endl;
        
    }
}

void pop()
{
    struct node *temp;
    temp = top;
    if(top==0){cout<<"nothing"<<endl;}
    else
    {
        top=top->link;
        free(temp);
    }
    
}

int main()
{
    push(6);
    push(7);
    push(3);
    push(5);
    pop();
    display();
    return 0;
}