#include <bits/stdc++.h>

using namespace std;

void brute_force(){
    int sum = 0;

    for(int i = 0; i <= 100; i++)
        sum = sum + i;

    cout << sum << endl;
}

void gauss(){
    int sum = 0;
    sum = 50 * 101;
    cout << sum << endl;
}
int main(){         
    gauss();

    return 0;
}