#include <iostream>
using namespace std;

struct node
{
    int x;
    struct node *next;
};

int main()
{
    struct node *head;
    head=new node;
    head->x=1;
    head->next=new node;
    head->next->x=2;
    head->next->next=new node;
    head->next->next->x=5;
    head->next->next->next=new node;
    head->next->next->next->x=7;
    head->next->next->next->next=new node;
    head->next->next->next->next->x=8;
    head->next->next->next->next->next=NULL;

    struct node*temp =head;
    while(temp)
    {
        cout<<"->"<<temp->x;
        temp=temp->next;
    }

    return 0;
}
