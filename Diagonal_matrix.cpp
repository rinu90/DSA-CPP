#include<iostream>
using namespace std;

struct Matrix {
    int A[10];
    int n; //length of array
};

void set(struct Matrix *m, int i, int j, int x){
    if(i==j){
        m->A[i]=x;
    }

}

int get(struct Matrix m, int i, int j){
    if(i==j){
        return m.A[i];
    }
    else{
        return 0;
    }
}

void display(struct Matrix m){
    //nested for loop for pringitn 2d array
    for(int i=0; i<m.n; i++){
        for(int j=0; j<m.n; j++){
            if(i==j){
                cout<<m.A[i]<<" ";
            }
            else{
                cout<<0<<" ";
            }
            
        }cout<<endl;
    }
}


int main(){
    struct Matrix m;
    m.n=4;
    set(&m, 1, 1, 10);
    set(&m, 2, 2, 20);
    set(&m, 3, 3, 30);
    set(&m, 0, 0, 40);

    display(m);

    return 0;
}