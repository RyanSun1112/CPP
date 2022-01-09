#include <bits/stdc++.h>

using namespace std;

int main(){         
    int input;
    cin >> input;
    
    while(input != 0){
        if(input >= 25){
            cout << 25 << endl;
            input = input - 25;
        }else if(input >= 10){
            cout << 10 << endl;
            input = input - 10;
        }else if(input >= 5){
            cout << 5 << endl;
            input = input - 5;
        }else if(input >= 1){
            cout << 1 << endl;
            input = input - 1;
        }
    }
    return 0;
}