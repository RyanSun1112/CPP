#include <bits/stdc++.h>

using namespace std;

int main(){         
    int input;
    cin >> input;
    set <int> number_year;
    int counter = 1;
    for(int i = input + 1; i < INT_MAX; i++){   // 10 000    10 234  
        int length = to_string(i).length();
        counter = 1;
        number_year.clear();
        
        for(int v = 0; v < length;v++){
            number_year.insert(i / counter % 10);
            counter = counter * 10;
            int size = number_year.size();
            if(length == size){
                cout << i << endl;
                return 0;
            }  
        }
    }

    return 0;
}