#include <bits/stdc++.h>

using namespace std;

int main(){         
    int number;
    int rounds;
    int mutliples;
    int index;
    cin >> number >> rounds>> mutliples >> index;
    int people[number];
    for(int i = 1; i < number;i++){
        people[i-1] = i;
    }
    

    return 0;
}