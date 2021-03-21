#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    int y;
    int digit_one = 0;
    int digit_two = 0;
    int digit_three = 0;

    cin >> x;
    cin >> y;
    cout << x << endl;
    digit_one = x % 10;
    digit_two = x/10 % 10; 
    digit_three = x/100 % 10;
    cout<< digit_one<< endl;
    cout << digit_two << endl;
    cout << digit_three << endl;

    return 0;
}