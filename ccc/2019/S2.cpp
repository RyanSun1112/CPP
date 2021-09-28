#include <bits/stdc++.h>

using namespace std;
bool determineprime(int input){
    if (input <= 2 || input % 2 == 0) {
        return false;
    }else{
        for (int i = 3; i <= sqrt(input); i+=2) {
            if (input % i == 0) {
                return false;
            }
        }
        return true;
    }
}
int main(){         
    int howmany;
    cin >> howmany;
    int input;
    int d = 0;
    for(int i = 0; i < howmany; i++){
        cin >> input;
        for(int v = 3; v < input*2;v+=2){
            d = 2*input-v;
            if(determineprime(d) && determineprime(v) && (v + d) == input * 2 ){
                cout << d << " " << v << endl;
                break;
            }
        }
    }
    return 0;
}