#include <bits/stdc++.h>

using namespace std;

int main(){         
    int input;
    cin >> input;
    set <int> number_year;
    int counter = 1;
    int length = 0;
    int size= 1;
    int i = input;
    int v = 0;
    while(length != size){   // 10 000    10 234
        v = 0;
        size = 0;
        i++;  
        length = to_string(i).length();
        counter = 1;
        number_year.clear();
        
        while(v != length){
            v++;
            number_year.insert(i / counter % 10);
            counter = counter * 10;
            size = number_year.size();    
        }
    }   
    cout << i << endl;          
    return 0;
}