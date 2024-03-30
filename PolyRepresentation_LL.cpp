#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

struct Node{ //create node using struct - can also use class
    int coeff;
    int exp;
    struct Node *next; //points to the next term

}*poly=NULL;

void create()
{
    struct Node *t, *last = NULL;
    int num, i;
    cout<<"Enter no of terms : ";
    cin>>num;
    cout<<"Enter each term's coeff and exp : "<<endl;

    for(i=0; i<num; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node)); //allocating memory

        scanf("%d%d", &t->coeff, &t->exp); //values are stored in t's coeff and exp
        t->next = NULL;

        if(poly == NULL)
        {
            poly = last = t;
        }
        else
        {
            last->next = t;
            last = t;
        
        }
    }

}

void Display(struct Node *p)
{
    while(p)
    {
        printf("%d%d +", p->coeff, p->exp);
        p = p->next;
    }
    printf("\n");
}

long Eval(struct Node *p, int x)
{
    long val = 0;
    while(p)
    {
        val+= p->coeff*pow(x, p->exp);
        p = p->next;
    }
    return val;
}

int main()
{
    create();
    Display(poly);
    printf("%d\n", Eval(poly,1));
    return 0;
}