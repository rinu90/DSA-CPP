#include<iostream>
using namespace std;

// to explain this concept, we can use class/object or structure
//using structure here

struct Array{
    int A[10];
    int size;
    int length;
};

//defining it as global outside main

void display(struct Array arr){
    cout<<"The array elements are: ";
    for(int i=0; i<arr.length; i++){
        cout<<arr.A[i]<<" ";
    }

}

void append(struct Array *arr, int x){
    //check if there is any empty space in the array
    //using *arr as pointer variable since we use ->
    if(arr->length < arr->size){
        arr->A[arr->length] = x;
        arr->length++;
    }
}

void insert(struct Array *arr, int index, int x){
    if(index>=0 && index<arr->length){
        for(int i=arr->length; i>index; i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int main(){

    struct Array arr1 = { {1,2,3,4,5}, 10, 5 };
    cout<<"The initial array is ";
    display(arr1);
    cout<<endl;

    append(&arr1, 100);
    cout<<"Array after appending 100 :";
    display(arr1);
    cout<<endl;

    insert(&arr1, 0, 200);
    cout<<"Array after insertion of 200 : ";
    display(arr1);
    cout<<endl;

    return 0;
}