#include <bits/stdc++.h>

using namespace std;

int main(){
    int grade;
    int total = 20;


    cin >> grade;

    if (grade <=7) {
        cout << total << endl;
    } else if (grade > 7 && grade <=12) {
        cout << total + 10 << endl;
    }

    // if (grade <= 7) {
    //     cout << total << endl;
    // }
    // if (grade > 7 && grade <= 12) {
    //     cout << total + 10 << endl;
    // }


    return 0;
}