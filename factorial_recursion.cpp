#include<iostream>
using namespace std;

//for larger number instead of using int we can use long to hold larger numbers

int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}

int main()
{
    int num = 3;
    cout<<"The factorial of "<<num<<" is "<<fact(num);
    return 0;
}