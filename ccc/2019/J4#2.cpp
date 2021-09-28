#include <bits/stdc++.h>

using namespace std;

int main(){  
    string input;       
    int h = 0;
    int v = 0;
    int numbers[2][2] = {
        {1,2},
        {3,4}
    };
    cin >> input;

    for(int i = 0; i < input.size();i++){
        if(input[i] == 'H')
            h++;
        else
            v++;
    }

    if(h % 2){
        swap(numbers[0][0],numbers[0][1]);
        swap(numbers[1][0],numbers[1][1]);
    }
    if(v % 2){
        swap(numbers[0][0],numbers[1][0]);
        swap(numbers[0][1], numbers[1][1]);
    }
      for(int i = 0; i < 2; i++){
        for(int d = 0; d < 2; d++)
            cout << numbers[i][d] << " ";
        cout << endl;
    }
    return 0;
}