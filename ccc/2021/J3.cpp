#include <bits/stdc++.h>

using namespace std;

int main(){         
    int input;
    int counter = 0;
    string direction2;
    while(input != 99999){
        cin >> input;
        if (input == 99999)
            return 0;
        int direction = floor(input/1000);
        int first_digit = floor(input/10000);
        int second_digit = floor(direction - (first_digit * 10));
        int steps = input - ((first_digit * 10000)+(second_digit * 1000));
        if(first_digit + second_digit == 0)
            cout << direction2 << " "  << steps << endl;
        else if((first_digit + second_digit) % 2 > 0){
            direction2 = "left";
            cout << direction2 << " " << steps << endl;
        }
        else if ((first_digit + second_digit) % 2 == 0){
            direction2 = "right";
            cout << direction2 << " " << steps << endl;
        } 
        counter++;  
    }
    return 0;
}