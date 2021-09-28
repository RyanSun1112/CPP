#include <bits/stdc++.h>
using namespace std;
int with_stack(){

    stack <char> stk_input;
    string input;
    cin >> input;

    for(int i = 0; i < input.size(); i++)
        stk_input.push(input[i]);


    while(!stk_input.empty()){
        cout << stk_input.top();
        stk_input.pop();
    }
}
int without_stack(){
    string input;
    cin >> input;
    for(int i = input.size()-1; i > -1; i--)
        cout << input[i];
}


int main(){  
    without_stack();
    with_stack();       

    return 0;    
    }