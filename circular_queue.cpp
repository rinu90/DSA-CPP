#include<iostream>
using namespace std;

class CircularQueue{
    private:
        int front;
        int rear;
        int size;
        int* Q;

    public:
        CircularQueue(int size);
        ~CircularQueue();
        void display();
        void enqueue(int x);
        int dequeue();
        bool isEmpty();
        bool isFull();
        
};

CircularQueue::CircularQueue(int size){
    this->size = size;
    front = 0;
    rear = 0;
    Q = new int[size];
}

CircularQueue::~CircularQueue(){
    delete [] Q;
}

bool CircularQueue::isEmpty(){
    if(front == rear){
        return true;
    }
    return false;
}

bool CircularQueue::isFull(){
    if((rear+1) % size == front){
        return true;
    }
    return false;
}

void CircularQueue::enqueue(int x){
    if(isFull()){
        cout<<"Queue overflow"<<endl;
    } else {
        rear = (rear+1) % size;
        Q[rear] = x;
    }
}

int CircularQueue::dequeue(){
    int x = -1;
    if(isEmpty()){
        cout<<"Queue Underflow"<<endl;
    } else {
        front=  (front+1) % size;
        x = Q[front];
        
    }
    return x;
}

void CircularQueue::display(){
    int i = front + 1;
    do{
        cout<<Q[i]<<flush;
        if(i < rear){
            cout<<" <- "<< flush;
        }
        i = (i+1) % size;
    } while (i != (rear+1)%size);
}

int main() {

    int A[] = {1, 3, 5, 7, 9};
    

    CircularQueue cq(sizeof(A)/sizeof(A[0]));

    for(int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cq.enqueue(A[i]);
    }
    cq.display();
    cout<<endl;

    cq.enqueue(10);

    for(int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cq.dequeue();
    }
    cq.dequeue();

    return 0;

}