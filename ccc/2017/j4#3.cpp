#include <bits/stdc++.h>

using namespace std;
bool arithmetic2(int number){
    int difference, previous = number % 10;
    difference = previous - (number / 10 % 10);
    previous = number % 10;
    number = number / 10;
    while(number > 0){
        if((previous- (number % 10) != difference))
            return false;
        previous = number % 10;
        number = number / 10;

    }
    return true;
}
bool arithmetic(int number){
    int number_length = to_string(number).length();
    vector <int> number_arr;
    int counter = 1;
    set <int> difference;
    if(number_length < 2){
        return false;
    }else{
        for(int i = 0; i < number_length; i++){
            number_arr.push_back((number / counter) % 10);
            counter = counter * 10;
        }
        for(int i = 1; i < number_length; i++){
            // if(i == 0){
            //     i = 0;
            // }else{
                difference.insert(number_arr[i] - number_arr[i-1]);
        
    }
    }
    if(difference.size() == 1){
        return true;
    }else{
        return false;
    }
    // if(hour < 10 && minute > 9){
    //     int first = hour, second = minute / 10, third = minute % 10;
    //     if(first-second == second - third){
    //         return true;
    //     }else{
    //         return false;
    //     }
    // }else if(hour > 9 && minute > 9){
    //     int first = hour / 10, second = hour % 10, third = minute / 10, fourth = minute % 10;
    //     if(((second-third) == (third - fourth)) &&((first - second == second - third)))
    //         return true;
    //     else    
    //         return false;
    // }else{
    //     return false;
    // }
}

int main(){    
    int number = 0;     
    cin >> number;

    if(arithmetic2(number)){
        cout << "It is arithmetic squence" << endl;
    } else{
        cout << "It is not arithmetic squence" << endl;

    }

    return 0;
}