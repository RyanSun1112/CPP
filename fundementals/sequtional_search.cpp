#include <bits/stdc++.h>

using namespace std;

int main(){         
    int array[10] = {54, 26, 93, 17, 77, 31, 44, 55, 20, 65};
    int input;
    cin >> input;

    for(int i = 0; i < 10; i++){
        if(array[i] == input){
            cout << i << endl;
            return 0;
        }
    }
    cout << "Not Found" << endl;

    return 0;
}