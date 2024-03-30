#include<iostream>
using namespace std;

void merge(int a[], int p, int q, int r){
    int b[5];
    int i, j, k;
    k = 0;
    i = p;
    j = q+1;
    while(i<=q && j<=r){
        if(a[i] < a[j]){
            b[k++] = a[i++];
        }
        else{
            b[k++] = a[j++];
        }
    }
    while(i<=q){
        b[k++] = a[j++];
    }
    while(j<=r){
        b[k++] = a[j++];
    }
    for(i=r; i>=p; i--){
        a[i] = b[--k];
    }

}

void mergesort(int a[], int p, int r){
    int q;
    if(p<r){
        q = (p+r)/2;
        mergesort(a, p, q);
        mergesort(a, q+1, r);
        merge(a, p, q, r);
    }
}

int main(){
    
    int arr[5] = {3,4, 8, 1, 2};
    mergesort(arr, 0, 4);
    cout<<"Sorted array";
    for( int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}