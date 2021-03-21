#include <bits/stdc++.h>

using namespace std;

int main(){        
    int button, how_many;
    vector <char> Letters = {'A','B','C','D','E'};
    do{
        cin >> button >> how_many;
        for(int v = 0;v < how_many;v++){                 // how_many
            if(button== 1){                            // if button one put the first letter to the last one
                Letters.push_back(Letters[0]);              // ABCDE
                Letters.erase(Letters.begin());
            } else if(button == 2){ 
                Letters.insert(Letters.begin(),Letters[4]);
                Letters.pop_back();
            } else if(button == 3){
                Letters.insert(Letters.begin(),Letters[1] );
                Letters.erase(Letters.begin() + 2);
            }        
        }
    }while(button != 4);

    for(int g = 0; g < 5;g++)                           // console out
        cout << Letters[g] << " ";
    
    return 0;
}