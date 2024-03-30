#include<iostream>
using namespace std;

//function prototyping
void A(int);
void B(int);

//recursive method B
void B(int n)
{
    if(n>1)
    {
        cout<<n<<" ";
        A(n/2);
    }
}

//recursive method A
void A(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        B(n-1);
    }
}

int main()
{
    int a =20;
    A(a);
    return 0;
}