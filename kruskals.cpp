#include <iostream>
#define V 7 // no of vertices in graph
#define I 32767
#define E 9 //no of edges in graph

using namespace std;

void PrintMCST( int T[][V-1], int A[][E]){
    cout<< " \n Minimum cost Spanning Tree Edges (w/ cost)\n"<<endl;
    
    for(int i{0}; i<V-1; i++){
        
        cout<< "[" << T[0][i] << "]--["<<T[1][i]<<"] cost: "<< "]" <<endl;
        
    }
    cout << endl;
}


//set operations: union and find
void Union(int u, int v, int s[]){
    if(s[u] < s[v]){
        s[u] += s[v];
        s[v] = u;
    }else {
        s[v] += s[u];
        s[u] = v;
    }
}

int Find(int u, int s[]){
    int x = u;
    int v = 0;

    while(s[x] > 0){
        x = s[x];
    }

    while(u != x){ //connecting nodes with parent directly
        v = s[u];
        s[u] = x;
        u = v;
    }
    return x;
}

void KruskalsMCST(int A[3][9]){
    int T[2][V-1]; //solution array
    int track[E] {0}; // track edges that are included in solution
    int set[V+1] = {-1, -1, -1, -1, -1, -1, -1, -1,}; //array to find cycle

    int i {0};
    while(i<V-1){
        int min = I;
        int u {0};
        int v {0};
        int k {0};

        //find a minimum cost edge from full graph
        for(int j {0}; j<E; j++){
            if(track[j] == 0 && A[2][j] < min){
                min = A[2][j];
                u = A[0][j];
                v = A[1][j];
                k = j;
            }
        }


        //check if the selected min cost edge (u, v) forming a cycle or not
        if(Find(u, set) != Find(v, set)){
            T[0][i] = u;
            T[1][i] = v; 

            //preform union
            Union(Find(u, set), Find(v, set), set);
            i++;
        }
        track[k] = 1; //k edge is considered
    }
    PrintMCST(T, A);
}

int main(){
    //graph stored here, whenever there is an edge, first row contains all the vertices 1 of all the edges
    //ie, it store all the left vertices of all the edges in our graph
    //the second row is for al the right vertices. the third row is for the weights
    int edges[3][9] = {
        {1, 1, 2, 2, 3, 4, 4, 5, 5}, 
        {2, 6, 3, 7, 4, 5, 7, 6, 7}, 
        {25, 5, 12, 10, 8, 16, 14, 20, 18}
    
    };
    KruskalsMCST(edges);

    return 0;
}