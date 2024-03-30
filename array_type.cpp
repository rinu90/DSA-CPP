#include<iostream>
using namespace std;

int main()
{
    //Static array
    int arr1[5] = {1,2,3,4,5};
    cout<<arr1[3]<<endl;

    //Dynamic array
    int *p;
    p = new int[5];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    cout<<p[2]<<endl;

    return 0;
}