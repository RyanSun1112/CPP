#include <bits/stdc++.h>

using namespace std;

int main(){
    int phone_number[5];
    for (int i = 1; i <= 4; i++) 
        cin >> phone_number[i];
    
    if((phone_number[1] == 8 || phone_number[1] == 9) && (phone_number[2] == phone_number[3]) && (phone_number[4] == 8 || phone_number[4] == 9))        
        cout << "ignore"; 
    else
        cout << "answer";
    
    return 0;
}
     
