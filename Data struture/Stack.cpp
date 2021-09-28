#include <bits/stdc++.h>

using namespace std;

int main(){ 
    stack <int> cool;

    for(int i = 0; i <= 5; i++)
        cool.push(i); 
    cout << cool.size() << endl;
    cool.push(6);
    cout << cool.top() << endl;
    cool.pop();
    int size = cool.size();
    for(int i = 0; i < size; i++){
        cout << cool.top() << endl;
        cool.pop();
    }
    // while(!cool.empty()){
    //     cout << cool.top() << endl;
    //     cool.pop();
    // }
    return 0;
}