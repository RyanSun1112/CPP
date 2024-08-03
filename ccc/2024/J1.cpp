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
    cool.erase(cool.end());
    cool.erase(cool.end());
    auto it = cool.end();  
    cout << *it;
    int d = *it; 
    int counter = 0;
    for (int i = 0; i < however; i++){
        if(input[i] == d){
            counter++;
        }
    }
    cout << " " << counter;



    return 0;
}