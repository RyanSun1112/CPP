#include <bits/stdc++.h>

using namespace std;

int main(){         
    string input1;
    string inputs1;
    while(cin >> input1){
        if(input1 == "\n"){
            break;
        }
        else{
            inputs1.append(input1);
        }
    }
    string inputs2;
    while(cin >> input1){
        if(input1 == "\n"){
            break;
        }
        else{
            inputs2.append(input1);
        }
    }
    int counter = 0;
    for(int i = 0; i < inputs1.length(); i++){
        if(inputs2.find(inputs1[i])){
            inputs2.erase(inputs1[i]);
        }
        else{
            cout << "Is not an anagram." << endl;
            return 0;
    }
    cout << "Is an anagram.";

    return 0;
}