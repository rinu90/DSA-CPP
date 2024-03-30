#include<iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){
    for(int i =0; i<arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
cout<<endl;

}

int isSorted(struct Array arr){
    for(int i=0; arr.length-1; i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0;
            break;
        }
        
    }
    return 1;
}

int main(){
    struct Array arr1 = { {1,2,3,4,5},5,5 };
    cout<<isSorted(arr1)<<endl;
    display(arr1);
    return 0;
}