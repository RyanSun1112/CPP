#include <bits/stdc++.h>

using namespace std;

int main(){         
    string input;
    cin >> input;
    bool endlt = false;
    string number = {'1','2','3','4','5','6','7','8','9','0'};
    for(int i = 0; i < input.size();i++){
        
        if(input[i] == '+'){
            cout << " tighten ";
            endlt = true;
        } else if(input[i] == '-'){
            cout << " loosen ";
            endlt = true;
        }else{
            size_t found = number.find(input[i]);
                while(i != input.size()){
                    if(found!= std::string::npos)
                        cout << input[i]; 
                    else 
                        break;
                    i++;   
            }
            cout << input[i];
            if(endlt == true){
                cout << endl;
                endlt = false;
            }
            
        }
        
    }
    return 0;
}
