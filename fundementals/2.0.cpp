#include <bits/stdc++.h>

using namespace std;

int main(){
    int input;

    while (cin >> input){
        if(input == 0)
            break;

        if (input < 6 || input > 100){
            cout << "Error please enter another number" << endl;
        } else {
            for(int i = 1; i < input; i++)
                for(int j = i + 1; j < input; j++)
                    for(int h = j + 1; h < input; h++)
                        if((i + j + h) == input)
                            cout << i << " " << j << " " << h << endl;
        }
    }
    return 0;
}