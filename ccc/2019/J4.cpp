#include <bits/stdc++.h>

using namespace std;
void vertical (int numberss[2][2]){
    int interger = numberss[0][1];
    int interger1 = numberss[1][1];
    numberss[0][1] = numberss[0][0];
    numberss[1][1] = numberss[1][0];
    numberss[0][0] = interger;
    numberss[1][0] = interger1;

}
void horizontal(int numbers[2][2]){
    int interger = numbers[0][0];
    int interger1 = numbers[0][1];
    numbers[0][0] = numbers[1][0];
    numbers[0][1] = numbers[1][1];                 
    numbers[1][0] = interger;
    numbers[1][1] = interger1;


}
int main(){         
    string input;
    int Numbers[2][2] = {
        {1,2},
        {3,4},
    };
    
    cin >> input;
    for(int i = 0; i < int(input.size()); i++){
        if(input[i] == 'H')
            horizontal(Numbers);
        else
            vertical(Numbers);
    }


    for(int i = 0; i < 2; i++){
        for(int d = 0; d < 2; d++)
            cout << Numbers[i][d] << " ";
        cout << endl;
    }
    return 0;
}