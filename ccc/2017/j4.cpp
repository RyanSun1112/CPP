#include <bits/stdc++.h>

using namespace std;
int calclate(int first, int second, int third, int fourth){

}
int calclate1(int first, int second, int third){

}
int main(){         
    int input;
    int time1 = 1200; 
    cin >> input;
    for(int i = 0; i < input;time1++){
        for(int time = 0; time < 60; time++)
            time1++;
        int first_digit = time1 % 10;
        int second_digit = time1 / 10 % 10;
        int third_digit = time1 / 100 & 10;
        if(third_digit == 6){
            
        }
        if(time1 >= 1000){
            int fourth_digit = time1 / 1000 % 10;
            calclate(first_digit, second_digit, third_digit, fourth_digit);
        }else{
            calclate1(first_digit, second_digit, third_digit);
        }
    }
    return 0;
}