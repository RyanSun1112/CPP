#include <bits/stdc++.h>

using namespace std;

int main(){         
    unsigned int array[500000];
    int low = 0, middle = 0, high = 500000;
    int input;
    cin >> input;
    double counter = 0;
    for(int i = 1; i <= 500000; i++){
        array[i] = i;
    }
    while(low <= high){
        middle = (high + low) / 2;
        if(array[middle] == input){
            cout << "Found "<< middle << endl;
            cout << counter << endl;
            return 0;
        }
        if(array[middle] > input)
            high = middle - 1;
        else    
            low = middle + 1;
            counter++;
    }
    cout << counter << endl;
    cout << "Not Found" << endl;
    return 0;
}