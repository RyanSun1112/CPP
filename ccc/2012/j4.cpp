#include <bits/stdc++.h>

using namespace std;

int main(){         
    int K;
    cin >> K;
    string letters;
    cin >> letters;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = 1; i <= letters.length(); i++){
        int position = 3*i + K;
        for(int v = 0; v < 26; v++){
            if(letters[i-1] == alphabet[v]){
                if(v - position < 0)
                    cout << alphabet[26-(position - v)];  
                else
                    cout << alphabet[v-position];
                break;
            }

        }
    }
    return 0;
}