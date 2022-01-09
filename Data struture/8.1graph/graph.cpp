#include <bits/stdc++.h>

using namespace std;

int arr[5][5] = {};

void output_graph(){
    for(int i = 0; i < 5;i++){
        for(int source_vertex = 0; source_vertex < 5;source_vertex++){
            cout << arr[i][source_vertex] << " ";
        }
        cout << endl;
    }
}
void add_direct_edge(int source_vertex, int target_vertex){
    arr[source_vertex][target_vertex] = 1;
}
void add_direct_edge_weight(int source_vertex, int target_vertex,int weight){
    arr[source_vertex][target_vertex] = weight;
}
void add_undirect_edge(int source_vertex,int target_vertex){
    arr[source_vertex][target_vertex]=1;
    arr[target_vertex][source_vertex]=1;
}
void add_undirect_edge_weight(int source_vertex, int target_vertex, int weight){
    arr[source_vertex][target_vertex]=weight;
    arr[target_vertex][source_vertex]=weight;

}
int main(){  
    output_graph();
    cout << endl;       
    add_direct_edge(0,1);
    add_direct_edge(0,3);
    add_direct_edge(1,2);
    add_direct_edge(1,4);
    add_direct_edge(3,4);
    add_direct_edge(4,2);
    output_graph();
    cout << endl; 
    add_direct_edge_weight(0,1,9);
    add_direct_edge_weight(0,3,6);
    add_direct_edge_weight(1,2,8);
    add_direct_edge_weight(1,4,4);
    add_direct_edge_weight(3,4,2);
    add_direct_edge_weight(4,2,7);
    output_graph();
    cout << endl; 
    add_undirect_edge(0,1);
    add_undirect_edge(0,3);
    add_undirect_edge(1,2);
    add_undirect_edge(1,4);
    add_undirect_edge(3,4);
    add_undirect_edge(4,2);
    output_graph();
    cout << endl;      
    add_undirect_edge_weight(0,1,9);
    add_undirect_edge_weight(0,3,6);
    add_undirect_edge_weight(1,2,8);
    add_undirect_edge_weight(1,4,4);
    add_undirect_edge_weight(3,4,2);
    add_undirect_edge_weight(4,2,7);
    output_graph();
    cout << endl;      
    
    return 0;
}