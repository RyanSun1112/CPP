#include <bits/stdc++.h>

using namespace std;
bool sequence(int hour, int minute){
    if(hour < 10 && minute > 10){
        int first = hour, second = minute / 10, third = minute % 10;
        if(first-second == second - third){
            return true;
        }else{
            return false;
        }
    }else if(hour > 10 && minute > 10){
        int first = hour / 10, second = hour % 10, third = minute / 10, fourth = minute % 10;
        if(((second-third) == (third - fourth)) &&((first - second == second - third)))
            return true;
        else    
            return false;
    }else{
        return false;
    }

}




int main(){    
    int number = 0;     
    int time = 1200;
    int duration;
    cin >> duration;
    number += (duration / 720) * 31;

    int hour = (time / 100);
    int minute = (time%100);
    hour = 2;
    minute = 10;
        if(sequence(hour, minute)){
            number++;
            cout << hour << minute << endl;
        }
        // if(minute < 10)
        //     cout << hour << 0 << minute << endl;
        // else
        //     cout << hour << minute << endl;

    cout << number << endl;
    return 0;
}