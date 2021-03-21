#include <bits/stdc++.h>

using namespace std;

int main(){        
    int Button;
    int how_many;
    string Letters = "ABCDE";

    while(Button != 4){
        cin >> Button;               // console in
        cin >> how_many;
        for(int v = 0;v < how_many;v++){                 // how_many
            if(Button== 1){                            // if button one put the first letter to the last one
                Letters.push_back(Letters[0]);              // ABCDE
                Letters.erase(0,1);
            } else if(Button == 2){ 
                char last_letter = Letters[4];            // if button two 
                for (int i = 4; i > 0; --i)
                    Letters[i] = Letters[i-1];
                Letters[0] = last_letter;
            } else if(Button == 3){
               char first_letter = Letters[1];              // if button three
               Letters[1] = Letters[0];
               Letters[0] = first_letter;
            } 
               
        }
    }
    for(int g = 0; g < 5;g++)                           // console out
        cout << Letters[g] << " ";
    


    return 0;
}