#include <bits/stdc++.h>

using namespace std;

int main(){  
    int N;
    bitset <100> result; 
    string today,yesterday;
    bitset <100> today2 (100);            // if not <100>, then it will be std::out_of_range
    bitset <100> yesterday2 (100);
    int num_occupied = 0;
    cin >> N >> yesterday >> today;
    for(int i = 0; i < N;i++){
        if(yesterday[i] == 'C')
            yesterday2.set(i,1);
        if(today[i] == 'C')
            today2.set(i,1);
        
    }
    result = today2 & yesterday2; 
    for(int i = 0; i < N; i++){
        if(result.test(i))
            num_occupied++;
    }
        // if(today2[i] == 1 && yesterday2[i] == 1 )
     
    cout << num_occupied << endl;
    return 0;
}