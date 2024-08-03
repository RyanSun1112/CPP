#include <bits/stdc++.h>

using namespace std;

int main(){         
    int packages, collisions;
    cin >> packages >> collisions;
    bool yes = false;

    if(packages > collisions)
        cout << (packages*50) - (collisions *10) + 500 << endl;

    else 
        cout << (packages*50) - (collisions *10)<< endl;

    return 0;
}