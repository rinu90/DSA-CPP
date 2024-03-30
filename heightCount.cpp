#include <iostream>
#include <queue>
#include <stack>

using namespace std;


//using a doubly LL for the tree
class Node{
    public:
        Node* lchild;
        int data;
        Node* rchild;
        Node() {}; //default constructor for node
        Node(int data); //parameterized constructor for node
};

Node::Node(int data){ //this parameterized constructor will take the data into the data part of node
    lchild = nullptr; //initialize l child and r child as null ptr
    this->data = data;
    rchild = nullptr;
}

class Tree{
    private:
        Node* root; //points to root node for the tree
    public:
        Tree(); //constructor for tree

        //method for tree
        //int inStart, int inEnd are starting and ending index for tree
        Node*generateFromTraversal(int inorder[], int preorder[], int inStart, int inEnd);

        int Height(Node* p); //pointer variable node type
        int Height() {return Height(root);} //recursion
        int Count(Node* p);
        int Count(){Count(root);}
};



Tree::Tree(){
    root = nullptr;
}



int searchInorder(int inArray[], int inStart, int inEnd, int data){
    for(int i=inStart; i<=inEnd; i++){
        if(inArray[i] == data){
            return i;  //we have to return at what index of inorder array
                       //the element is present 
        }
    }
    return -1;
}



Node*Tree::generateFromTraversal(int *inorder, int *preorder, int inStart, int inEnd){


    static int preIndex = 0;

    if(inStart > inEnd){ //first index  and last index of inorder or preorder 
        return nullptr;
    }

    Node* node = new Node(preorder[preIndex++]); //new node 
    //preindex=0, preindex++=1, preorder[1] = first node of the tree
    //this one node is returned in 57

    if(inStart == inEnd){ //ie, there is only onde node in this tree
        return node; //will return the new node created in ine 52
    }

    //from preorder we get the root, then we go to inorder from which we get
    //the index of the root, then we can say that all the elemnts present in 
    //the left side of this root (in in order) are present in L child and similartly for R child

    //from splitindex we want to find from where inorder will be split


    int splitIndex = searchInorder(inorder, inStart, inEnd, node->data);
    node->lchild = generateFromTraversal(inorder, preorder, inStart, splitIndex-1);
    node->rchild = generateFromTraversal(inorder, preorder, splitIndex+1, inEnd);

    return node;
}


int Tree::Height(Node* p) {
    int l = 0;
    int r = 0;

    //if root not null
    if(p != nullptr){ 
        l = Height(p->lchild); //height of left sub tree
        r = Height(p->rchild); //height of right sub tree
        if(l > r){
            return l + 1; //calculating the height of while tree, +1 is for the root node
        } else {
            return r + 1;
        }
    }
    return 0;
}

int Tree::Count(Node *p){
    int x;
    int y;
    if(p != nullptr){
        x = Count(p->lchild); //store the number of nodes in l sub tree
        y = Count(p->rchild);
        return x + y +1;
    }
    return 0;
}

int main(){

    Tree bt;

    int preorder[] ={8, 3, 12, 4, 9, 7, 5, 10, 6, 2};
    int inorder[] = {12, 9, 4, 7, 3, 8, 10, 5, 2, 6};

    int size = sizeof(inorder)/sizeof(inorder[0]);

    Node* T = bt.generateFromTraversal(inorder, preorder, 0, size-1);

    cout<<"Height: "<<bt.Height(T)<<endl;
    cout<<"Count: "<<bt.Count(T)<<endl;

}