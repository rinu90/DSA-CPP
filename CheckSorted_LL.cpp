#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void create (int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node[sizeof(struct Node)];
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1; i<n; i++)
    {
        t = new Node[sizeof(struct Node)];
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
            }
}

int isSorted(struct Node *p)
{
    int x = -65536;
    while(p!=NULL)
    {
        if(p->data < x)
        {
            return 0;
        }
        x = p->data;
        p = p->next;
    }
    return 1;
}

int main()
    {
        int A[] = {10, 20, 30, 40, 50};
        create(A,5);
        cout<<isSorted(first);
        return 0;

    }