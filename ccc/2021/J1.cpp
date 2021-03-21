#include <bits/stdc++.h>

using namespace std;

int main(){         
    int input;
    cin >> input;
    int kPa = 0;
    kPa = 5 * input - 400;
    
    if (kPa < 100)
        cout << kPa << endl << "1" << endl;
    else if (kPa == 100)
        cout << kPa << endl << "0" << endl;
    else if (kPa > 100)
        cout << kPa << endl << "-1" << endl;
    return 0;
}