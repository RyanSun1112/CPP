#include <bits/stdc++.h>

using namespace std;

int main(){         
    int input;
    int how_many = 0;
    cin >> input;
    if(input > 10){
        cout << 0 << endl;   // optional
        return 0;
    }
    for(int hand_one = 0; hand_one <= 5; hand_one++){
        for(int second_hand = 0; second_hand <= input/2; second_hand++)
            if(second_hand + hand_one == input)
                how_many++;
    }
    cout << how_many << endl;
    
    return 0;
}