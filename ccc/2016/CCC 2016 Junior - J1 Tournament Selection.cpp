#include <bits/stdc++.h>

using namespace std;

int main(){ 
    char input; 
    int wins = 0;
    int num = 0;
    do{
        cin >> input;
        num++;
        if(input == 'W')
            wins++;
        
    } while(num != 6);

    if(wins >= 5) {
        cout << "1";
    } else if(wins == 3 || wins == 4) {
        cout << "2";
    } else if(wins == 1 || wins == 2) {
        cout << "3";
    } else {
        cout << "-1";
    }
    
    return 0;
}