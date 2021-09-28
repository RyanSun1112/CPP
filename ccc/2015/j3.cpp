#include <bits/stdc++.h>

using namespace std;

int main(){         
    string input;
    cin >> input;
    string output;
    string vowels = "aeiou";
    string con = "bcdfghjklmnpqrstvwxyz";
    vector<string> character = {"bc", "dfg", "hjkl", "mnpqr", "stvwxyz"};   
    for(int i = 0; i < int(input.length());i++){
        if(con.find(input[i]) != string::npos){
            output += input[i];
            for(int v = 0; v < 5; v++){
                if(character[v].find(input[i]) != string::npos){
                    output += vowels[v];
                    break;
                }
            }
            if(input[i] == 'z')
               output += input[i]; 
            else
                output += con[con.find(input[i])+1];
            
        }else{
            output += input[i];
        }
    }
    cout << output << endl;
    return 0;
}