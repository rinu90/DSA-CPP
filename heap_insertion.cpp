#include<iostream>
#include <vector>

using namespace std;

//lecutre based
void InsertA(int A[], int n){
    int i = n;
    int temp = A[n];
    while(i>0 && temp > A[i%2 == 0 ? (i/2)-1 : i/2]){ //if i%2 == 0 is true then (i/2)-1 will be used
                                                       //if the condition is false then i/2 will be used
        A[i] = A[i%2 == 0 ? (i/2)-1 : i/2]; //store the value of parent node to child
        i = i%2 == 0 ? (i/2)-1 : i/2; //i is decremented based on if its even or odd
        }
        A[i] = temp;
}

template <class T>
void Print(T& vec, int n){ //printed out the elements
    cout<<"Mas Heap: ["<<flush;
    for (int i=0; i<n; i++){
        cout<<vec[i]<<flush;
        if(i<n-1){
            cout<<", "<<flush;
        }
    }
    cout<< "]" <<end;
}

int main(){

    int a[] = {45, 35, 15, 30, 10, 12, 6, 5, 20, 50};
    InsertA(a, 9);
    Print(a, sizeof(a)/sizeof(a[0])); //array, no.elements in array
    cout<<end;;

    return 0;
}