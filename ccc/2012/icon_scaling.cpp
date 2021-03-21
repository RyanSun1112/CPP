#include <bits/stdc++.h>

using namespace std;
void formula(string ab, int input){

for(int counter = 0; counter < input; counter++){
    for(int i = 0; i < input; i++)
        cout << ab[0]; 
    for(int i = 0; i < input; i++)
        cout << ab[1];
    for(int i = 0; i < input; i++)
        cout << ab[2];
    cout << endl;
}


}
int main(){ 
    int input;
    string line_one = "*x*";
    string line_two = " xx";
    string line_three = "* *";
    cin >> input;
    formula(line_one,input);
    formula(line_two,input);
    formula(line_three,input);
    
    return 0;
}
    // do{
    //     for(int i = 0; i < input; i++)
    //         cout << line_one[0];
    //     for(int i = 0; i < input; i++)
    //         cout << line_one[1];
    //     for(int i = 0; i < input; i++)
    //         cout << line_one[2];
    //         cout << endl;
    //         counter++;
    // }while(counter != input);
    // counter = 0;
    // do{
    //     for(int i = 0; i < input; i++)
    //         cout << line_two[0];
    //     for(int i = 0; i < input; i++)
    //         cout << line_two[1];
    //     for(int i = 0; i < input; i++)
    //         cout << line_two[2];
    //         cout << endl;
    //         counter++;
    // }while(counter != input);
    // counter = 0;
    // do{
    //     for(int i = 0; i < input; i++)
    //         cout << line_three[0];
    //     for(int i = 0; i < input; i++)
    //         cout << line_three[1];
    //     for(int i = 0; i < input; i++)
    //         cout << line_three[2];
    //         cout << endl;
    //         counter++;
    // }while(counter != input);
    




