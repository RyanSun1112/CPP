#include <bits/stdc++.h>

using namespace std;

int main(){ 
    string your_input;
    string computer[3] ={"Rock","Paper","Scissors",};
    int randNum;
    cout << "Welcome to Rock,Paper,Scissors. Please type what you what to play." << endl;
    cin >> your_input;
    while(your_input != "Exit"){
        srand((unsigned int)time(NULL));
        randNum = rand() % 3;
        cout << "You played: " << your_input << endl;
        cout <<"The computer played: "<< computer[randNum] << endl;
        if(your_input == "Rock" && computer[randNum] == "Scissors")
            cout << "You Win" << endl;
        else if(your_input == "Scissors" && computer[randNum] == "Paper")
            cout << "You Win" << endl;
        else if(your_input == "Paper" && computer[randNum] == "Rock")
            cout << "You Win" << endl;
        else if(computer[randNum] == "Scissors" && your_input == "Paper")
            cout << "You lose" << endl;
        else if(computer[randNum] == "Paper" && your_input == "Rock")
            cout << "You lose" << endl;
        else if(computer[randNum] == "Rock" && your_input == "Scissors")
            cout << "You lose" << endl;
        else
            cout << "Tie" << endl;
        cout << "Welcome to Rock,Paper,Scissors. Please type what you what to play." << endl;
        cin >> your_input;    
    }
    return 0;
}