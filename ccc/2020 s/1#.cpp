#include <bits/stdc++.h>

using namespace std;

int main(){         
    int happy;
    int S, M, L;
    cin >> S >> M >> L;
    happy = 1 * S + 2 * M + 3 * L;
    if(happy >= 10){
        cout << "happy" << endl;
    }else{
        cout << "sad" << endl;
    }
    return 0;
}