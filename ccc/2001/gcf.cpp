#include <bits/stdc++.h>

using namespace std;
int recursion(int input1, int input2){
    for(int i = input1;i> 1;i--){
        if(input1 % i==0 && input2 % i ==0){
            cout << i << endl;
            return 0;
        }
        recursion(input1,input2);
    }
}
int main(){         
    int input1,input2;
    cin >> input1 >> input2;
    recursion(input1,input2);

    return 0;
}