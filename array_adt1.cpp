#include<iostream>
using namespace std;

//use OOP, using class and object

class Array{
    private:
       int *A;
       int size;
       int length;
    public:
       //create a constructor for the array
       Array(int size){
        this->size=size;
        A = new int[size];
       }   

       //create method
    void create(){
        length = 5;
        for(int i=0; i<length; i++){
            A[i] = 10;
        }
    }

        //display method
    void display(){
        cout<<"The array elements are : ";
        for(int i=0; i<length; i++){
            cout<<A[i]<<" ";
        } 
        cout<<endl;
    }  

    //once we use this we have to delete it from heap
        //we use destructor for this  

    //Destructor
    ~Array(){
        delete[] A;
        cout<<"The array is destroyed!"<<endl;
    }    

       };


int main(){

    Array array1(10);
    array1.create(); //initialize length=5 and 5 elements each of which is 10
    array1.display();
    return 0;
}