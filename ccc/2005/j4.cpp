#include <bits/stdc++.h>

using namespace std;

int main(){         
    string input;
    string alphabet = "cdefghijklmopqrtuvwxyz";
    char b = 'b';
    char s = 's';

    while(input != "X"){
        cin >> input;
        if(input.find(alphabet) != string::npos){
            cout << "NO" << endl;
            break;
        }else{
            if(input.find(b)!= string::npos && input.find(s) != string::npos){
                cout << "yes" << endl;
                break;
            
                cout << "No"<< endl;
                break;
            }
                cout << "YES" << endl;

        }
    }
    return 0;
}