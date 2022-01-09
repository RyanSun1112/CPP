#include <bits/stdc++.h>

using namespace std;

int main(){         
    string input;
    cin >> input;
    string output;
    string vowels = "aeiou";
    string next_cons="bcdfghjklmnpqrstvwxyz";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string next_vow = "aaaeeeeiiiiioooooouuuuuuuu";
    for(int i = 0; i < int(input.length());i++){
        if(vowels.find(input[i]) != string::npos){
            output += input[i];
        }else{
            output += input[i];
            output += next_vow[alphabet.find(input[i])];
            if(input[i] == 'z')
               output += input[i]; 
            else
                output += next_cons[next_cons.find(input[i])+1];  
        }
    }
    cout << output << endl;
    return 0;
}