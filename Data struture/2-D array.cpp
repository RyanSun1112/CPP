#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int c[4][4]={
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11},
        {12,13,14,15}
    };
    cout << c[3][2] << endl;
    for(int row = 0; row < 4; row++){        
        for(int column = 0; column < 4;column++)
            cout << c[row][column] << " ";
        cout << endl;
    }
    return 0;
}