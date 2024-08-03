#include <bits/stdc++.h>

using namespace std;

int main(){         
    string input;
    cin >> input;
    bool breakpls = false;
    bool endlt = false;
    string alphabet = {'A','B','C','D','E','F','G',
    'H','I','J','K','L','M','O','P','Q','R','S','T'};
    for(int i = 0; i < input.size();i++){
        if(input[i] == '+'){
            cout << " tighten ";
            endlt = true;
        } else if(input[i] == '-'){
            cout << " loosen ";
            endlt = true;
        }else{
            size_t found = alphabet.find(input[i]);
            if(found!= std::string::npos){
                if(endlt == true){
                    cout << endl;
                    endlt = false;
                }
            }else{
                while(i != input.size()){
                    found = alphabet.find(input[i]);
                    if(found!= std::string::npos){
                        endlt = false;
                        cout << endl;
                        i--;
                        breakpls = true;
                        break;
                    }
                    cout << input[i];
                    i++;
                }
            }
            if(breakpls == false)
                cout << input[i];
            breakpls = false;
        }
    }
    return 0;
}

// 