#include <bits/stdc++.h>

using namespace std;
int recursion(int bigger, int smaller){
    if(smaller == 0){
        cout << bigger << endl;
        return 0;
    }
    recursion(smaller,bigger%smaller);
}
int main(){         
    int input1,input2,bigger,smaller,reminder;
    cin >> input1 >> input2;

    if(input1 > input2){
        bigger = input1;
        smaller = input2;
        
    }else{
        smaller = input1;
        bigger = input2;
    }
    recursion(bigger,smaller);
    cout << __gcd(2321,340);
    //     reminder= input2%input1;
    // }
    // for(int i = 0; i < smaller;i++)
    //     check(bigger,smaller);
    //     reminder = bigger % smaller;

    //     bigger = smaller;
    //     smaller = reminder;
    //     if(reminder == 0){
    //         cout <<
    //     }
        
    return 0;
}