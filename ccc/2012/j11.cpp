#include <bits/stdc++.h>

using namespace std;

int main(){
    int speed_limit, recorded,delta;
    cin >> speed_limit >> recorded; 
    delta = recorded - speed_limit;
    if(delta >= 31 )
        cout << "You are speeding and your fine is $500." << endl;
    else if(delta >= 21 && delta <= 30 )
        cout << "You are speeding and your fine is $270." << endl;
    else if(delta <= 20 && delta >= 1)
        cout << "You are speeding and your fine is $100. "<< endl;
    else
        cout << "Congratulations, you are within the speed limit! " << endl;       
    
    return 0;
}