#include <bits/stdc++.h>

using namespace std;
int recursion(int x){
    cout << x << endl;
    // if(x == 0)
    //     return 0;
    recursion(x-1);
}
int main(){         
    int x = 10;
    recursion(x);
    return 0;
}