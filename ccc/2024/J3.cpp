#include <bits/stdc++.h>

using namespace std;

int main()
{
    int however;
    cin >> however;
    int input[however];
    set <int> cool;
    for(int i = 0; i < however; i++){
        int cooss;
        cin >> cooss;
        cool.insert(cooss);
        input[i] =cooss;
    }
    int ee =0;
    int d; 
    for(auto it = cool.begin(); it != cool.end(); it++){

        if(ee == cool.size()-3){
            d = *it;
            break;
        }
        ee++;
    }
    cout << d;
    int counter = 0;
    for (int i = 0; i < however; i++){
        if(input[i] == d){
            counter++;
        }
    }
    cout << " " << counter;



    return 0;
}