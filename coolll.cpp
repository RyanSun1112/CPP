#include <bits/stdc++.h>

using namespace std;

int main(){
    int input[2];         
    cin >> input[0] >> input[1];
    int numbers[input[0]];
    for(int i = 0; i < input[0]; i++)
        cin >> numbers[i];
    sort(numbers, numbers + 3);
    int total_sum = 0;
    int size = 1;
    total_sum = numbers[0];
    
    for(int v = input[0]; v > 0; v--){
        for(int i = input[0]; i > 0; i--){
            if(total_sum + numbers[i] <= input[1]){
                i = 0;
                total_sum += numbers[i];
                size++;
                if(total_sum == input[1]){
                    cout << size << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}