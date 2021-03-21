#include <bits/stdc++.h>

using namespace std;

int main(){         
    bitset <4> input(4);
    bitset <4> input2(4);
    bitset <4> result(4);
    bitset <4> result2(4);

    for(int i = 0; i < 200;i++){
        cin >> input; 
        cin >> input2;

        result = input | input2;
        result2 = input & input2;

        cout <<"Or value :"<< result << endl;
        cout << "And value :" << result2 << endl;
    }
    return 0;
}