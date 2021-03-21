#include <bits/stdc++.h>

using namespace std;

int main(){
    int idk[2][2][2] = {
        {{0,1},{2,3}},
        {{4,5},{6,7}},        
    };         
    cout << idk[0][1][1] << endl;
    for(int array_row_number = 0; array_row_number < 2; array_row_number++){
        for(int array = 0; array < 2; array++){
            for(int number = 0; number < 2; number++)
                cout << idk[array_row_number][array][number] << " ";
            cout <<" ";
        }
        cout << endl;
    }

    return 0;
}