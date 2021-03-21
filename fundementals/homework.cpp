#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;
    int integer_1 = 0;
    int integer_2 = integer_2 > 0;
    int integer_3 = integer_3 > 0;


    // we first need to determine if the number that you consoled in is allowed
    while (cin >> num) {
        if (num < 10 || num > 100)
            break;

        do {
            integer_1++; // determine if is even or odd
            if (num % 2 == 0) {
                integer_2 = num / 2 - integer_1;
                integer_3 = num / 2;
            } else {
                integer_2 = num / 2 - (integer_1 - 1);
                integer_3 = num / 2;
            }
            if (integer_2 <= 0) 
                cout << "";
            
            // } else {
            //     cout << integer_1 << "," << integer_2 << "," << integer_3 << endl;
            // }

            while (integer_3 != 1) {
                integer_2++;
                integer_3--;

                if ((integer_2 <= 0) || (integer_1 == integer_2 || integer_2 == integer_3 || integer_1 == integer_3 )) {
                    cout << "";
                } else {
                    cout << integer_1 << "," << integer_2 << "," << integer_3 << endl;
                }

            }


            //repeat
        } while (integer_1 != num);

    }

    return 0;
}