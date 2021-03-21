#include <bits/stdc++.h>

using namespace std;

int main(){
    int input[6]; 
    int apples;
    int bananas;        
    for(int i = 0; i < 6;i++)
        cin >> input[i];
    apples = input[0] * 3 + input[1] * 2 + input[2] * 1;
    bananas = input[3] * 3 + input[4] * 2 + input[5] * 1;

    if(apples > bananas)
        cout << "A";
    else if(apples < bananas)
        cout << "B";
    else
        cout << "T";

    return 0;
}