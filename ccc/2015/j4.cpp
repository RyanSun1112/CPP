#include <bits/stdc++.h>

using namespace std;

int main(){         
    int howmany;
    cin >> howmany;
    int who;
    int friends[100] = {}; 
    int wait_time[100]; 
    int time = 0; //yes
    char directions;
    int output[100] = {};
    for(int i = 0; i < howmany;i++){
        cin >> directions >> who;
        friends[who] = who;
        if(directions == 'R'){
            wait_time[who] = time;
        }
        else if(directions == 'W'){
            time+=who-1;
        }
        else if(directions == 'S'){ 
            output[who] += time - wait_time[who] - 1;
        }
        time++;
      
    }
    for(int i = 0; i < 100;i++){
        if(friends[i] > 0){
            if(output[i] == 0)
                cout << i <<" "<< output[i]-1 << endl;
            else
                cout << i <<" "<< output[i] << endl;
                
        }
        
    }
    return 0;
}