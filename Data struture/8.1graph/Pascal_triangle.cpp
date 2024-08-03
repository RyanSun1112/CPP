#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows, output = 1;
    cin >> rows;
    for (int i = 0; i <= rows; i++) {
        // for(int spaces = 1; spaces <= rows-i; spaces++)
        // cout << " ";
        for (int j = 0; j <= i; j++) {
            if (i == 0 || j == 0)
                output = 1;
            else
                output = output * (i - j + 1) / j;
            cout << output << " ";
        }
        cout << endl;
    }

    return 0;
}