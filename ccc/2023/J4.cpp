#include <bits/stdc++.h>

using namespace std;

int main(){         
    int columns;
    cin >> columns;
    int canvas [2][columns];
    for(int i = 0; i < 2; i++){
        for(int v = 0; v < columns; v++){
            cin >> canvas[i][v];
        }
    }
    int total_meters =0;
    int plus = 0;
    int i = 0;
        for(int v = 0; v < columns; v++){
            if(canvas[i][v] == 1){
                if(canvas[i][v+1] == 1|| canvas[i][v-1] || canvas[i+1-plus])
                    if(canvas[i][v-1] == 1 && canvas[i+1-plus][v] != 1 && canvas[i][v+1] != 1)
                        total_meters += 2;
                    else if(canvas[i][v-1] == 1 && canvas[i+1-plus] [v] == 1 && canvas[i][v+1]!=1)
                        total_meters+= 1;
                    else if(canvas[i][v-1] != 1 && canvas[i+1-plus][v] == 1 && canvas[i] [v+1] ==1)
                        total_meters+= 1;
                    else if(canvas[i][v-1] != 1 && canvas[i+1-plus][v] != 1 && canvas[i] [v+1] ==1)
                        total_meters+= 2;
                    else if(canvas[i][v-1] != 1 && canvas[i+1-plus][v] == 1 && canvas[i] [v+1] !=1)
                        total_meters+= 2;
                    
                else
                    total_meters += 3;
            }   
            v++;
            if(canvas[i][v] == 1){
                if(canvas[i][v+1] == 1|| canvas[i][v-1] || canvas[i+1-plus])
                    if(canvas[i][v-1] == 1 && canvas[i+1-plus][v] != 1 && canvas[i][v+1] != 1)
                        total_meters += 2;
                    else if(canvas[i][v-1] == 1 && canvas[i+1-plus] [v] == 1 && canvas[i][v+1]!=1)
                        total_meters+= 2;
                    else if(canvas[i][v-1] != 1 && canvas[i+1-plus][v] == 1 && canvas[i] [v+1] !=1)
                        total_meters+= 3;
                    else if(canvas[i][v-1] != 1 && canvas[i+1-plus][v] == 1 && canvas[i] [v+1] ==1)
                        total_meters+= 2;
                    else if(canvas[i][v-1] != 1 && canvas[i+1-plus][v] != 1 && canvas[i] [v+1] ==1)
                        total_meters+= 2;
                    else if(canvas[i][v-1] == 1 && canvas[i+1-plus][v] == 1 && canvas[i] [v+1] ==1)
                        total_meters += 1;
                else
                    total_meters += 3;
        }
    }
    i += 1;
    plus = 2;
        for(int v = 0; v < columns; v++){
            if(canvas[i][v] == 1){
                if(canvas[i][v+1] == 1|| canvas[i][v-1] || canvas[i+1-plus])
                    if(canvas[i][v-1] == 1 && canvas[i+1-plus][v] != 1 && canvas[i][v+1] != 1)
                        total_meters += 2;
                    else if(canvas[i][v-1] == 1 && canvas[i+1-plus] [v] == 1 && canvas[i][v+1]!=1)
                        total_meters+= 1;
                    else if(canvas[i][v-1] != 1 && canvas[i+1-plus][v] == 1 && canvas[i] [v+1] ==1)
                        total_meters+= 1;
                    else if(canvas[i][v-1] != 1 && canvas[i+1-plus][v] != 1 && canvas[i] [v+1] ==1)
                        total_meters+= 2;
                    else if(canvas[i][v-1] != 1 && canvas[i+1-plus][v] == 1 && canvas[i] [v+1] !=1)
                        total_meters+= 2;
                    else if(canvas[i][v-1] == 1 && canvas[i+1-plus][v] == 1 && canvas[i] [v+1] ==1)
                        total_meters += 0;
                else
                    total_meters += 3;
        }
            v++;
            if(canvas[i][v] == 1){
                if(canvas[i][v+1] == 1|| canvas[i][v-1] || canvas[i+1-plus])
                    if(canvas[i][v-1] == 1 && canvas[i+1-plus][v] != 1 && canvas[i][v+1] != 1)
                        total_meters += 2;
                    else if(canvas[i][v-1] == 1 && canvas[i+1-plus] [v] == 1 && canvas[i][v+1]!=1)
                        total_meters+= 1;
                    else if(canvas[i][v-1] != 1 && canvas[i+1-plus][v] == 1 && canvas[i] [v+1] ==1)
                        total_meters+= 1;
                    else if(canvas[i][v-1] != 1 && canvas[i+1-plus][v] != 1 && canvas[i] [v+1] ==1)
                        total_meters+= 2;
                    else if(canvas[i][v-1] != 1 && canvas[i+1-plus][v] == 1 && canvas[i] [v+1] !=1)
                        total_meters+= 2;
                    
                else
                    total_meters += 3;
            }   
    }
    
    cout << total_meters << endl;
    return 0;
}