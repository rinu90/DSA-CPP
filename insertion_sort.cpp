#include<iostream>
using namespace std;

void insertionsort(int arr[], int length){
    int i, j, key;
    for(i=1; i<length; i++){
        j = i;
        while(j>0 && arr[j-1] > arr[j]){
            key = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = key;
            j--;
        }
    }
    cout<<"Sorted array is";
    for(i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n = 5;
    int arr[5] = {3,4, 8, 1, 2};
    insertionsort(arr, n);
    return 0;
    
}