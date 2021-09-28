#include <bits/stdc++.h>

using namespace std;

int main(){         
    string text, str;
    cin >> text >> str;
    int length = str.length();
    for(int i = 0; i < length;i++){
       if(text.find(str) != string::npos){
            cout << "yes" << endl;
            return 0;
        }
       str.push_back(str[0]);
       str.erase(0,1);
    }
    cout << "no" << endl;
    return 0;
}