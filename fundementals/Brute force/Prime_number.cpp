#include <bits/stdc++.h>

using namespace std;
int generatelist(int input){
    bool isPrime = true;
    int counter = 0;
    
    for(int v = 2; v <= input; v++){
        for (int i = 2; i <= input; i++) {
            if (v % i == 0){
                isPrime = false;
                counter++;
            }
        }
        if(isPrime == false && counter <= 1)
            cout << v << endl;
        counter = 0;
    }
}
bool determineprime(int input){
    if (input == 2) {
        return false;
    }else{
        for (int i = 3; i <= sqrt(input); i+=2) {
            if (input % i == 0) {
                return false;
                break;
            }
        }
        return true;
    }
}

int main(){
    int n;
    bool a;
    cin >> n;
    a = determineprime(n);

    if (a)
        cout << n << " is a prime number" << endl;
    else
        cout << n << " is not a prime number" << endl;
    generatelist(n);

    return 0;
}