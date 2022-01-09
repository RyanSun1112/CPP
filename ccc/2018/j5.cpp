#include <bits/stdc++.h>

using namespace std;
bool arr[10000][10000] = {};
// queue <int> output = {};
void output_graph(int pages){
    for(int i = 0; i < pages;i++){
        for(int j = 0; j < pages;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void add_direct_edge(int v, int w){
    arr[v][w] = 1;
}

int main(){   
    int num_pages, access_page;
    cin >> num_pages;
    int pages;

    for(int i = 0; i < num_pages; i++){
        cin >> pages;
        if(pages != 0){
            for(int v = 0; v < pages;v++){
                cin >> access_page;
                add_direct_edge(i,access_page-1);
            }
        }
    }
    
    output_graph(num_pages);
    

    return 0;
}