#include <bits/stdc++.h>

using namespace std;

int main(){   
    int howmany;
    cin >> howmany;

    int input;
    int input2;
    int rating[howmany];
    for(int i = 0; i < howmany;i++){
        cin>>input >> input2;
        rating[i] = input*5 - input2*3;
    }
    int gold_star = 0;
    for(int i = 0; i < howmany;i++){
        if(rating[i] > 40){
            gold_star++;
        }
    }
    if(gold_star == howmany){
        cout << gold_star << "+" << endl;
    }else{
        cout << gold_star << endl;
    }
    return 0;
}