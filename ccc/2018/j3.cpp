#include <bits/stdc++.h>

using namespace std;
int arr[1000][1000] = {};
void add_undirect_edge_weight(int source_vertex, int target_vertex, int weight){
    arr[source_vertex][target_vertex]=weight;
    arr[target_vertex][source_vertex]=weight;

}
int main(){         
    int distance[4];
    for(int v = 1; v < 5; v++){
        for(int i = 0; i < 3;i++ ){
            cin >> distance[i];
            add_undirect_edge_weight(v,i,distance[i]);
        }
        
    }
    return 0;
}