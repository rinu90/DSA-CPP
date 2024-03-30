#include<iostream>
#include <vector>

using namespace std;

//lecutre based
void Insert(int A[], int n){
    int i = n;
    int temp = A[n];
    while(i>1 && temp > A[i/2]){ 
        A[i] = A[i/2]; //store the value of parent node to child
        i =  i/2; //i is decremented based on if its even or odd
        }
        A[i] = temp;
}

int Delete(int A[], int n){ //when this fun is called, the largest element will be returned
                            //second call, second largest element will be returned

    int i, j, x, temp, val;
    val=A[1]; //place first element in val, root ele
    x=A[n];  //place last ele in x
    A[1]=A[n]; //place last ele in root pos
    A[n]=val; //place root ele in last pos
    i=1;j=i*2;
    while(j<n-1)
    {
        if(j<n-1 && A[j+1]>A[j])
            j=j+1;
        if(A[i]<A[j])
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i=j;
            j=2*j;
        } 
        else break;
    }
    return val;
}


int main(){
    int H[] = {0, 14, 15, 5, 20, 30, 8, 40};
    int i;
    for(i=2; i<=8; i++) //inserting elements into heap
        Insert(H, i);
    for(i=7; i>1; i++){ //delete element and place at last pos, when we delete elements from 
                        //max heap, the max value will be deleted, ie the root ele
        Delete(H,i);
    }
    for(i=1; i<=7; i++)
        cout<<H[i]<<" ";
    cout<<endl;
    return 0;
}
