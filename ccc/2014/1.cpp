#include <bits/stdc++.h>

using namespace std;

int main(){  
    int angle_1,angle_2,angle_3;
    int sum = 180;
    cin >> angle_1 >> angle_2 >> angle_3;

    if (angle_1 + angle_2 + angle_3 != sum) {       // we first need to deterime if it's a traingle or not 
        cout << "Error" << endl;

    } else if (angle_1 == 60 && angle_2 == 60){
        cout << "Equilateral" << endl;
    } else if (angle_1 == angle_2 || angle_2 == angle_3 || angle_1 == angle_3) {
        cout << "Isosceles" << endl;
    } else {
        cout << "Scalene" << endl;
    }
    
    return 0;
}
