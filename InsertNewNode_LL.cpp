#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

int count(struct Node *p)
{
    int l=0;
    while(p) //pointing to a node and not null
    {
       l++;
       p=p->next;
    }
    return l;
}

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node[sizeof(struct Node)]; //creating the first node
    first->data = A[0];
    first->next = NULL;
    last = first;
    for(i=1; i<n; i++) //adds all the other nodes, create a new node and insert at the end of the LL
    {
        t = new Node[sizeof(struct Node)];
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last=t;
    }

}

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p=p->next;
    }
}

void Insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;
    if(index < 0 || index > count(p))
        return;

    t = new Node[sizeof(struct Node)];
    t->data = x;

    if(index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for(i=0; i<index-1; i++)
        {
            p = p->next;
            
        }
        t->next = p->next;
        p->next = t;
    }

}

int main()
    {
        int A[] = {10, 20, 30, 40, 50};
        create(A,5);
        Insert(first, 0, 5);
        Display(first);
        return 0;

    }
