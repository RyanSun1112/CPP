#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int dimesion1, dimesion2, dimesion3, dimesion4;       
    cin >> dimesion1>> dimesion2>> dimesion3 >> dimesion4;
    int dimesion[dimesion1][dimesion2] = {0};
    for(int i = 0; i < dimesion4; i++){
        for(int v = 0; v < dimesion3; v++){
            dimesion[i][v] = 2;
        }
    }
    for(int i = dimesion2; i > dimesion2-dimesion4; i--){
        for(int v = 0; v < dimesion3; v++){
            dimesion[i][v] = 2;
        }
    }
    for(int i = 0; i < dimesion4; i++){
        for(int v = dimesion1; v > dimesion1-dimesion3; v--){
            dimesion[i][v] = 2;
        }
    }
    for(int i = dimesion2; i > dimesion2-dimesion4; i--){
        for(int v = dimesion1; v > dimesion1-dimesion3; v--){
            dimesion[i][v] = 2;
        }
    }
    int steps;
    cin >> steps;
    while(steps != 0){
        for(int i = 0; i < dimesion2;i++){
            for()
        }
        steps--;
    }
    return 0;
}