#include<iostream>
using namespace std;

int main()
{
    //Declaration and Initialization
    //method1
    int A[10];
    cout<<"A = ";
    for(int i=0;i<10;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    //method2
    int B[5] = {10,20,30,40,50};
    cout<<"B = ";
    for(int i=0;i<5;i++)
    {
        cout<<B[i]<<" ";
    }
    cout<<endl;

    //method3
    float C[5]={1.1,2.2};
    cout<<"C = ";
    for(int i=0;i<5;i++)
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;

    //method4
    int D[]={100, 200, 300};

    cout<<"D = ";
    for(int i=0;i<3;i++)
    {
        cout<<D[i]<<" ";
    }
    cout<<endl;




    return 0;
}
