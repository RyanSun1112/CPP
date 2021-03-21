#include <bits/stdc++.h>

using namespace std;
int i = 300;

void cool(){
    i = 400;
    cout << "i = "<< i << endl;
}
int main(){         
    cout << i << endl;
    cool();
    cout << i << endl;
    
    return 0;
}