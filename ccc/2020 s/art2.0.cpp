#include <bits/stdc++.h>

using namespace std;

const int howmany = 500000;
int main(){         
    // cin >> howmany;               // if array > 500000, it won't work
    char comma_index2[howmany];
    int x[howmany], y[howmany];
    for(int i = 0; i < howmany;i++){
        cin >> x[i] >> comma_index2[howmany] >> y[i];
    }
    sort(x,x + howmany);
    sort(y,y + howmany);
    cout << x[0] - 1 << "," << y[0] -1  << endl;
    cout << x[howmany - 1] +1 << "," << y[howmany-1]+1 << endl;

    return 0;
}