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

int Max(struct Node *p)
{
    int max = INT32_MIN;
    while(p)
    {
        if(p->data > max)
        {
            max = p->data;
           
        }
         p = p->next;
    }
    return max;
}

int main()
{
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    cout<<"Max = "<<Max(first);
    return 0;
}