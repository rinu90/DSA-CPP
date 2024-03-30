#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;

};

void display(struct Array arr){
    for (int i =0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int Delete(struct Array *arr, int index){
    int x=0;
    int i;
    if(index >= 0 && index< arr->length){
        x=arr->A[index];
        for(i = index; i<arr->length; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int main(){
    struct Array arr1 = { {1,2,3,4,5}, 10, 5 };
    cout<<"The deleted element is "<<Delete(&arr1, 1)<<endl;
    display(arr1);
    return 0;
}