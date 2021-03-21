#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;      //= -1000 <= x <= 1000; x != 0
    int y;      // = -1000 <= y <= 1000; y != 0

    cin >> x;    // console input
    cin >> y;


    if (x > 0 && y > 0){
        cout << "1" << endl;

    } else if (x < 0 && y > 0){
        cout << "2" << endl;

    } else if (x > 0 && y < 0){
        cout << "4" << endl;

    } else if (x < 0 && y < 0){  
        cout << "3" << endl; 

    } else {        

    }
    return 0;
}