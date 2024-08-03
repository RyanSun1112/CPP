#include <bits/stdc++.h>

using namespace std;

int main(){         
    int counter;
    bool check = false;
    int check1 = 0;
    bool check2 = false;
    cin >> counter;
    string phrase = "WELCOME..TO.CCC.GOOD.LUCK.TODAY";
    while(!phrase.empty()){
        for(int i = 0; i <= counter; i++){
            if(phrase.empty()){
                check1 = i+1;
                check2 = true;
                break;
            }else{
                if(i == counter-1){
                    if(phrase[0] == '.'){
                        break;
                    }
                }
                else if(check == true){
                    check = false;
                    if(phrase[0] == '.'){
                        phrase.erase(0,1);
                        i = -1;
                    }else{
                        i = -2;
                    }

                }else{
                    cout << phrase[0];
                    phrase.erase(0,1);

                }

            }
        }
        if(check2 == true){
            for(int i = 0 ; i < counter - check1; i++){
                cout <<".";
            }

            return 0;
        }
        cout << endl; 
        check = true;
    }

    return 0;
}