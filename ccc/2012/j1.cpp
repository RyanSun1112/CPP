#include <iostream>
using namespace std;

int main(){
	int limit, speed, diff;
	cin >> limit >> speed;
	diff = speed - limit;
	if(diff <= 0){
		cout << "Congratulations, you are within the speed limit!";
		return 0;
	}if(diff >= 1 && diff <= 20){
		cout << "You are speeding and your fine is $100.";
		return 0;
	}if(diff >= 21 && diff <= 30){
		cout << "You are speeding and your fine is $270.";
		return 0;
	}
	
	cout << "You are speeding and your fine is $500.";
	return 0;
}