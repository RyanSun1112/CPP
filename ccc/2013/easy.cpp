#include <bits/stdc++.h>

using namespace std;

int main(){  
    int youngest,middle_age,difference = 0;
    cin >> youngest >> middle_age;
    int oldest = middle_age;
    difference = middle_age - youngest;
    oldest = oldest + difference;
    cout << oldest;
    return 0;
}