#include<iostream>
using namespace std;

//0,1,1,2,3,5

//using memoization
int F[10];


int mfib(int n){
    if (n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2] == -1){
            F[n-2] = mfib(n-2);
        }
        if(F[n-1] == -1){
            F[n-1] = mfib(n-1);
        }

        return F[n-2]+F[n-1];

    }
}

int main()
{
    int n;
    n = 5;
    for(int i=0;i<10;i++) //initialization
    {
    F[i]= -1;
    }
    cout<<n<<"th ternm in the Fibonacci series is "<<mfib(n-1)<<endl;

    return 0;

}