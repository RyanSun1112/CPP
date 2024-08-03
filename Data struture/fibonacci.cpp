#include <bits/stdc++.h>

using namespace std;
unsigned long long int fib(int number){
    if (number <= 1)
        return number;
    return fib(number-1) + fib(number-2);
}
int main(){         
    int input1;
    cin >> input1;
    if(input1 == 1){
        cout << 1 << endl;
        return 0;   
    }
    
    cout << fib(input1);
     

    return 0;
}