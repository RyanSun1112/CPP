#include <bits/stdc++.h>

using namespace std;

int main(){         
    int howmany;
    cin >> howmany;
    int d = 0;
    int counter = 0;
    string input;
    while(d != howmany){
        if(d > 0)
            cout << endl;
        cin >> input;
        d++;
        for(int i = 0; i < int(input.size());i++){
            counter++;
            if(input[i] != input[i + 1] && counter >= 1){
                cout << counter  << " " <<  input[i] << " ";
                counter = 0; 
        }
    }

    
    }
    return 0;
}