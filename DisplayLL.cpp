#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
};

int main(){
    int A[] = {3, 5, 7, 10, 15};

    Node* head = new Node; //created a head node

    Node* temp; //created temp and last node
    Node* last;

    head->data = A[0]; //data section of head node should contain the first element
    head->next = nullptr; 
    last = head;

    //create LL
    for(int i=1; i<sizeof(A)/sizeof(A[0]); i++){ //i will go until last element of A

        //create a temporary Node
        temp = new Node;

        //Populate temporary Node
        temp->data =A[i];
        temp->next = nullptr;

        //last's next is pointing to temp
        last->next = temp;
        last = temp;
    }

    //Display LL
    Node* p = head;

    while (p != nullptr){
        cout<< p->data << " -> " <<flush;
        p= p->next;
    }

    return 0;

}