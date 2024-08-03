#include <bits/stdc++.h>

using namespace std;

int main(){  
int input;
cin >> input;
int table [input][input];

for(int i = 0; i < input;i++){
    for(int v = 0; v < input;v++){
        cin >> table[i][v];
    }
}
int corners[4] = {};
corners[0]=table[0][0];
corners[1]=table[0][input-1];
corners[2]=table[input-1][input-1];
corners[3]=table[input-1][0];

sort(corners, corners+4);

if(corners[0] == table[0][0]){
    for(int i = 0; i<input;i++){
        for(int v = 0; v < input;v++){
            cout << table[i][v] << " ";
        }
        cout << endl;
    }
}
else if(corners[0] == table[0][input-1]){
    for(int i = input-1; i>=0;i--){
        for(int v = 0; v< input;v++){
            cout << table[v][i] << " ";
        }
        cout << endl;
    }
}
else if(corners[0] == table[input-1][input-1]){
    for(int i = input-1; i>=0;i--){
        for(int v = input-1; v>= 0;v--){
            cout << table[i][v] << " ";
        }
        cout << endl;
    }
}
else if(corners[0] == table[input-1][0]){
    for(int i = 0; i<input;i++){
        for(int v = input-1; v>= 0;v--){
            cout << table[v][i] << " ";
        }
        cout << endl;
    }
}

}


