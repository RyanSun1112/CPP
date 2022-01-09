#include <bits/stdc++.h>

using namespace std;
const int num = 5;
vector <int> arr [num];
queue <int> q = {};
int counter = 0;
void output_graph(){
    for(int i = 0 ; i < num ; i++){
        cout << "list of " << i << " : ";
        for(int v = 0; v < arr[i].size(); v++){
            cout << arr[i][v] << ",";
                //arr[i].erase(arr[i].begin() + counter);   
    }
    cout << endl;

        }
    
}
void add_undirect_edge(int source_vertex, int target){
    arr[source_vertex].push_back(target);
    arr[target].push_back(source_vertex);
}
void add_direct_edge(int source_vertex, int target){
    arr[source_vertex].push_back(target);
}

int main(){         
    add_undirect_edge(0,1);
    add_undirect_edge(0,4);
    add_undirect_edge(1,2);
    add_undirect_edge(1,3);
    add_undirect_edge(1,4);
    add_undirect_edge(2,3);

    add_undirect_edge(3,4);
    

    output_graph();

    return 0;
}