#include<iostream>
using namespace std;

int main()
{
    //method1
    int A[3][4];
    int B[2][3] = {
        {10,20,30},
        {40,50,60}
    };
    
    //method2 - using pointers
    int *C[2];
    C[0] = new int [3];
    C[1] = new int [3];

    //method3 - double pointer
    int **D;
    D = new int*[2];
    D[0] = new int[3];
    D[1] = new int[3];

    return 0;
}