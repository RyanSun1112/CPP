#include <bits/stdc++.h>

using namespace std;

int main(){         
    string input;
    cin >> input;
    int idk[input.size()];
    int idk2[input.size()];
    for(int i = 0; i < input.size();i++){
        if(input[i] == 'L'){
            idk[i] = 0;
            idk2[i] = 0;
        }
        else if(input[i] == 'M'){
            idk[i] = 1;
            idk2[i] = 1;
        }
        else if(input[i] == 'S'){
            idk[i] = 2;
            idk2[i] = 2;
        }
    }
    
    int howmany = input.size();
    sort(idk,idk + howmany);
    int counter = 0;
    for(int i = 0; i < input.size();i++){
        if(idk[i] != idk2[i]) 
            counter++;
    }
    if(counter == 0)
        cout << counter << endl;
    else
        cout << counter - 1 << endl;

    return 0;
}