#include <bits/stdc++.h>

using namespace std;
void solve(int n, char from_rod, char to_rod, char aux_rod){
    if (n==1){
        cout << " Move disc 1 from rod " << from_rod << " to rod " << to_rod << endl;
        return;
    }
    solve(n-1,from_rod, aux_rod,to_rod);
    cout << "Move disc" << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    solve(n-1,aux_rod, to_rod, from_rod);
}
int main(){         
    int input;
    cin >> input;
    solve(input,'A','C','B');
    return 0;
}