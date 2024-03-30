#include<iostream>
using namespace std;

class Diagonal{
    private:
       int *A;
       int n;
    public:
       Diagonal(int n){
        this->n = n;
        A = new int[n];
       } 

       ~Diagonal(){
        delete []A;
       } 

    void set(int i, int j , int x){
        if (i==j){
            A[i]=x;
        }
    }

int get(int i, int j){
    if(i==j){
        return A[i];
    }
    else
    {
        return 0;
    }
}

void display(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                cout<<A[i]<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }cout<<endl;
    }
    
}

};

int main(){

    Diagonal d1(4);
    d1.set(0,0,10);
    d1.set(1,1,20);
    d1.set(2,2,30);
    d1.set(3,3,40);
    d1.display();
    return 0;

}