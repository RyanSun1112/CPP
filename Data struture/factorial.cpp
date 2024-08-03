#include <bits/stdc++.h>

using namespace std;
int factorial(int input){
    if(input == 2)
        return input;
        
    return input * factorial(input-1);
}
int nonrec(int input){
    for(int i = 1; i < input; i++)
        input *= i;
    return input;
}
int main(){         
    int input1;
    cin >> input1;
    cout << factorial(input1) << endl;
    cout << nonrec(input1) << endl;
    return 0;
}