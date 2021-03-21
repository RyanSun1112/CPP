#include <bits/stdc++.h>

using namespace std;

int main(){         
    float plan_A = 0;
    float plan_B = 0;
    int daytime;
    int evening;
    int weekend;
    cin >> daytime >> evening >> weekend; 
    

    for(int i = 0; i < daytime - 100; i++)
        plan_A += 25; 
    for(int e = 0; e < daytime - 250;e++)
        plan_B += 45;
    for(int v = 0; v < evening;v++){
        plan_A += 15;
        plan_B += 35;
    }
    for(int h = 0; h < weekend;h++){
        plan_A += 20;
        plan_B += 25;
    }
    cout << "Plan A costs " << plan_A / 100 << endl;
    cout << "Plan B costs " << plan_B / 100 << endl;


    if(plan_A < plan_B)
        cout << "Plan A is cheapest." << endl;
    else if (plan_A == plan_B) 
        cout << "Plan A and B are the same price." << endl;
    else if (plan_A > plan_B)
        cout << "Plan B is cheapest." << endl;
    
            
    return 0;
}