#include <bits/stdc++.h>

using namespace std;
int arr[5][5] = {};
stack <int> s = {};
// queue <int> output = {};
void output_graph(){
    for(int i = 0; i < 5;i++){
        for(int j = 0; j < 5;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void add_undirect_edge(int v, int w){
    arr[v][w] = 1;
    arr[w][v] = 1;
}
void bfs(int v){
    int visited[5] = {};        // visited[5] = {0, 1, 0, 0, 0};
    s.push(v);
    while(!s.empty()) {
        int current_vertex = s.top();
        s.pop();
        if(!visited[current_vertex]){
            for(int i = 0; i < 5;i++){
                if(arr[current_vertex][i] == 1 )
                    if(visited[i] != 1)
                        s.push(i);

                }
                visited[current_vertex] = 1;
                cout << current_vertex << " -> ";
            }
    
        }
    
    }



int main(){         
    add_undirect_edge(0,1);
    add_undirect_edge(0,4);
    add_undirect_edge(1,2);
    add_undirect_edge(1,3);
    add_undirect_edge(1,4);
    add_undirect_edge(2,4);

    add_undirect_edge(3,4);
    output_graph();
    cout << endl;
    bfs(2);

    return 0;
}