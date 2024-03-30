#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
}*first=NULL;

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

int sum(struct Node *p)
{
    int s=0;
    while(p!=NULL) //or while(p)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
}

int main()
{
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    cout<<"Count = "<<count(first)<<endl;
    cout<<"Sum = "<<sum(first)<<endl;
    return 0;
}