#include <bits/stdc++.h>

using namespace std;

int main(){         
    stack <string> stk_direction;
    stack <string> stk_street;
    string street;
    char direction1;
    string direction2;
    while(street != "SCHOOL"){
        cin >> direction1 >> street;
        if(direction1 == 'L')
            direction2 = "RIGHT";
        else if(direction1 == 'R')
            direction2 = "LEFT";
        stk_street.push(street);
        stk_direction.push(direction2);
    }
    while(!stk_street.empty()){
        if(stk_street.top() == "SCHOOL")
            stk_street.pop();
        cout << "Turn " << stk_direction.top() << " onto " << stk_street.top() << " street." << endl;
        stk_street.pop();
        stk_direction.pop();
    }
    cout << "Turn " << stk_direction.top() << " into your HOME."<< endl;
    return 0;
}