#include<iostream>
using namespace std;

int fib(int n)
{
    if (n<=1)
    {
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}

int main()
{
    int n;
    n = 5;
    cout<<n<<"th ternm in the Fibonacci series is "<<fib(n)<<endl;
    return 0;

}