#include <bits/stdc++.h>

using namespace std;
unsigned long long exponents(int one, int two){
    int constant = one;
    for(int i = 0;i < two-1;i++){
        one *= constant;
    }
    return one;
}
unsigned long long recursion(int one,int two){
  
    if(two == 1){
        return one;
    }
    return one * recursion(one ,two-1);
}
int main(){         
    int input1, input2;
    cin >> input1 >> input2;

    unsigned long long int answer = recursion (input1,input2);
    cout << answer << endl;
    cout << exponents(input1, input2) << endl;
    return 0;
}