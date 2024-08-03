#include <bits/stdc++.h>

using namespace std;

int main(){
    int delivered;
    int collisions;
    cin >> delivered >> collisions;
    if(delivered > collisions)
        cout << delivered*50 - collisions * 10 +500 << endl;
    else 
        cout << delivered*50 - collisions * 10 << endl;


}