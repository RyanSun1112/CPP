#include <bits/stdc++.h>

using namespace std;

int main(){         
    string input;
    cin>>input;
    int hour = stoi(input.substr(0,2));
    int minutes = stoi(input.substr(3,5));  
    int starting = (hour * 60) + minutes;

    int distance = 240; 
    while(distance > 0){
        if(starting > 420 && starting < 600){ 
            distance -= 1;
        }
        else if(starting > 900 && starting < 1140){
            distance -= 1;
        }
        else{
            distance -= 2;
        }
        starting += 1;
        if(starting >= 1440){
            starting = 0;
        }
    }
    
    string output;
    string output2;
    int hours = starting / 60;
    int minutes2 = starting % 60;
    if(hours < 10)
        output += "0";
    if(minutes2 < 10)
        output2 += "0";
    if(minutes2 % 10 == 9)
        minutes2+=1;
    
       
    cout << output << hours << ":" << output2 << minutes2;

    //cout << setw(2) << setfill('0') << current_time/60 << ":" << setw(2) << setfill('0') << current_time%60 << endl;
    // if(hour > 7 && hour < 10){
    //     int time_rush = 10 - hour;
    //     hour += (time_rush/2) + 2;
    //     minutes += hour - floor(hour);
    //     hour -= hour - floor(hour);
    // }
    // else if(hour + 2 == 3){
    //     int time_rush = hour - 3 
    // }
}