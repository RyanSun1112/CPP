#include <bits/stdc++.h>

using namespace std;

int main(){         
    int input1, input2;
    cin >> input1 >> input2;

    for(int i = 0;i < 100;i++){
        if((input1*i)%input2 == 1){
            cout << i << endl;
            return 0;
        }
    }
    cout << "No such integer exists." << endl;
    return 0;
}