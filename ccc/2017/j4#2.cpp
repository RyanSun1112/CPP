#include <bits/stdc++.h>

using namespace std;
bool sequence(int hour, int minute){
    if(hour < 10 && minute > 9){
        int first = hour, second = minute / 10, third = minute % 10;
        if(first-second == second - third){
            return true;
        }else{
            return false;
        }
    }else if(hour > 9 && minute > 9){
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
    for(int i = 0; i < duration%720; i++ ){
        minute++;
        if(hour == 12 && minute == 60){
            hour = 1;
            minute = 0;
        }else if(minute == 60){
            hour++;
            minute = 0;
        }
        if(sequence(hour, minute)){
            number++;
        }
        // if(minute < 10)
        //     cout << hour << 0 << minute << endl;
        // else
        //     cout << hour << minute << endl;

    }
    cout << number << endl;
    return 0;
}