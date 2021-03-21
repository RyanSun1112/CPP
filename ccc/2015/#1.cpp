#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int month, day;
    cin >> month >> day;

    if (month == 1 && day >= 1){
        cout << "Before" << endl;
    } else if (month == 2 && day < 18 ){
        cout << "Before" << endl;
    } else if (month == 2 && day > 18){
        cout << "After" << endl;
    } else if (month >= 3 && day >= 1){
        cout << "After" << endl; 
    } else {
        cout << "Special" << endl;     
    }       

    return 0;
}