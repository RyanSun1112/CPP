#include <bits/stdc++.h>

using namespace std;
void formula(int input){
    int rows = 3;
    char s[3][3] = {
        {'*','x','*'},
        {' ','x','x'},
        {'*',' ','*'}
    };
    for(int row = 0; row < rows;row++){                         // which row
        for(int o = 0; o < input;o++){                          // how many times we cout each row
            for(int column = 0; column < rows; column++){       // which column
                for(int f = 0; f < input;f++)                   // how many times we cout each column
                    cout << s[row][column];                     // console out
            }
            cout << endl;                
        }
    }
}
int main(){         
    int input;
    cin >> input;
    formula(input);
    
    return 0;
}