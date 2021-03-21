#include <bits/stdc++.h>

using namespace std;


int main(){  
    int input1;
    int input2;
    int input3;
    int divisor = 0;
    int RSA = 0;
    int k;
    int x;
    cin >> input1 >> input2;
    input3 = input1;
        if(input2 >= 1000)
            return 0;
        input1--;
        do{
            input1++;
            x = 1;
            while((divisor <= 3) && ( x <= input1 /2)){
                k = input1 % x;
                if(k == 0)
                    divisor++;
                x++;
                
            }
            if (divisor == 3)
                RSA++;
            divisor = 0;
        }while(input1 != input2);

        cout << "The number of RSA numbers between " << input3 << " and " << input2 << " is "<< RSA << endl;
    
        
    

    return 0;
}