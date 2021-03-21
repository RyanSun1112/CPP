#include <bits/stdc++.h>

using namespace std;

int main(){         
    int Byron = 0;
    int Nikki = 0;
    int total_steps = 0;
    int steps[4];
    int goal;
    int h = 0;
    int t = 0;

    for(int i = 0; i < 4;i++)
        cin >> steps[i];
    cin >> goal;
    
    while(total_steps != goal){
        t = 0;
        while(total_steps != goal && t < steps[0]){
            t++;
            total_steps++;
            Nikki++;
        }
        h = 0;
        while(total_steps != goal && h < steps[1]){
            h++;
            total_steps++;
            Nikki--;
            }
    }
    total_steps = 0;
    while(total_steps != goal){
        t = 0;
        while(total_steps != goal && t < steps[2]){
            t++;
            total_steps++;
            Byron++;
        }
        h = 0;
        while((total_steps != goal) && (h < steps[3])){
            h++;
            total_steps++;
            Byron--;
        }
    }
    if(Byron > Nikki)
        cout << "Byron"<< endl;
    else if(Byron < Nikki)
        cout << "Nikky"<< endl;
    else
        cout << "Tied" << endl;

    return 0;
}
