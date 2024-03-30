#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){
    for(int i=0; i<arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

void swap(int *x, int *y) //pointer variables used to store address
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int get(struct Array arr, int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
    else{
        return -1;
    }
    
}

void set(struct Array *arr, int index, int x )
{

    if(index>=0 && index<arr->length)
    {
        arr->A[index] = x;
    }
}

int max(struct Array arr){
    int max = arr.A[0];
    int i;
    for(i=0; i<arr.length; i++){
        if(arr.A[i]>max){
            max = arr.A[i];
        }
        
    }
    return max;
}

int min(struct Array arr){
    int min = arr.A[0];
    int i;
    for(i=0; i<arr.length; i++){
        if(arr.A[i]<min){
            min = arr.A[i];
        }
        
    }
    return min;
}

int sum(struct Array arr){
    int s = 0;
    for(int i=0; i<arr.length; i++){
        s = s+arr.A[i];
    }
    return s;
}

float avg(struct Array arr){
    return (float)sum(arr)/arr.length;
}

int main()
{
    struct Array arr1 = { {1,2,3,4,5}, 5, 5 };
    cout<<"The given array is ";
    display(arr1);
    cout<<"The element at index 2 is "<< get(arr1, 2);
    cout<<endl;
    set(&arr1, 0, 100);
    display(arr1);
    cout<<"Max = "<<max(arr1)<<endl;
    cout<<"Min = "<<min(arr1)<<endl;
    cout<<"Sum = "<<sum(arr1)<<endl;
    cout<<"Avg = "<<avg(arr1)<<endl;
    return 0;
}