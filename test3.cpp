#include <bits/stdc++.h>

using namespace std;

int main(){ 
    string your_input;
    string computer[3] ={"Rock","Paper","Scissors",};
    cout << "Welcome to Rock,Paper,Scissors. Please type what you what to play." << endl;
    cin >> your_input;
    while(your_input != "Exit"){
        cout << "You played: " << your_input << endl;
        if(your_input == "Rock"){
            cout <<"The computer played:" << computer[1] <<  endl;
            cout << "You lose" << endl;
        } else if(your_input == "Scissors"){
            cout <<"The computer played: " << computer[0] << endl;
            cout << "You lose" << endl;
        }else {
            cout << "The computer played: " << computer[2] << endl;
            cout << "You lose" << endl;
        }
        cout << "Welcome to Rock,Paper,Scissors. Please type what you what to play." << endl;
        cin >> your_input;    
    }
    return 0;
}