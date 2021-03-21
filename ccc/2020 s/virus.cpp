#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int goal, day_0 ,next_day;
    cin >> goal >> day_0 >> next_day;
    int day = 0;
    int infected_people = day_0;
    int infected_next_day = day_0;
    while(infected_people <= goal){
        infected_next_day *= next_day;          // how much more the next day
        infected_people += infected_next_day;                      // total
        day++;
    }
    cout << day;

    return 0;
}