#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){
    int i, j, temp;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                //swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
    cout<<"the sorted array is";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n = 5;
    int arr[5] = {3,4, 8, 1, 2};
    bubblesort(arr, n);
    
}