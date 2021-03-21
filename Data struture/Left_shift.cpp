#include <bits/stdc++.h>

using namespace std;

int main(){         
    int b = 11;
    cout << "b = 11, binary =" << bitset<8>(b) << endl;

    cout << "a << 1 =" << bitset <8> (b << 1) << endl;
    cout << "a << 2 =" << bitset <8> (b << 2) << endl;
    cout << "a >> 1 =" << bitset <8> (b >> 1) << endl;
    cout << "a >> 2 =" << bitset <8> (b >> 2) << endl;

    return 0;
}