#include <bits/stdc++.h>

using namespace std;
int jf(int low,int length){

    
                 
        if(low < 10){
                length = 1;
                // cout << low << endl;
                low++;
                // cout << "length of number is "<< length << endl;
            } else if(low >= 10 && low < 100){
                length = 2;
                // cout << low<< endl;;
                low++;
                // cout << "length of number is "<< length << endl;
                    
        
            } else if(low >= 100 && low < 1000){
                length = 3;
                // cout << low << endl;
                low++;
                // cout << "length of number is "<< length << endl;
                    
        
            }else if(low >= 1000 && low < 10000){ 
                length = 4;
                // cout << low << endl;
                low++;
                // cout << "length of number is "<< length << endl;
                    
        
            }else if(low >= 10000 && low <100000){
                length = 5;
                // cout << low << endl;
                low++;
                // cout << "length of number is "<< length << endl;
                    
            }
        return length;
    
}
int formula1(int low, int& howmany1){
    
    if (low == 8 || low == 1 ){
        howmany1++;
    }
    return howmany1;
}
int formula2(int num2, int& howmany2){
    if((num2 == 11) ||
        (num2 == 88)||
        (num2 == 96)||
        ( num2 == 69)){
        howmany2++;
    }else{
        
    }
    return howmany2;
}
int formula3(int num3, int& howmany3){
    int digit_one = 0;
    int digit_two = 0;
    int digit_three = 0;
    digit_one = num3 % 10;
    digit_two = num3/10 % 10; 
    digit_three = num3/100 % 10;
        if (((digit_one == 1 && digit_three == 1)|| 
            (digit_one == 8 && digit_three == 8)|| 
            (digit_one == 6 && digit_three == 9)|| 
            (digit_one == 9 && digit_three == 6))&& 
            ((digit_two == 1)||
            (digit_two == 8)||
            (digit_two == 0))){
            howmany3++;
        }else{

        }
        return howmany3;
}
int formula4(int num4, int& howmany4){
    int digit_one = 0;
    int digit_two = 0;
    int digit_three = 0;
    int digit_four = 0;
    digit_one = num4 % 10;
    digit_two = num4/10 % 10; 
    digit_three = num4/100 % 10;
    digit_four = num4/1000 % 10;
    if ((digit_one == 1 && digit_four == 1 || digit_one == 8 && digit_four == 8|| digit_one == 6 && digit_four == 9 || digit_one == 9 && digit_four == 6)&&(digit_two == 1 && digit_three == 1 || digit_two == 8 && digit_three == 8|| digit_two == 6 && digit_three == 9 || digit_two == 9 && digit_three == 6|| digit_two == 0 && digit_three == 0)){
        howmany4++;

    }else{

    }
    return howmany4;
}
int formula5(int num5, int& howmany5){
    int digit_one = 0;
    int digit_two = 0;
    int digit_three = 0;
    int digit_four = 0;
    int digit_five = 0;
    digit_one = num5 % 10;
    digit_two = num5/10 % 10; 
    digit_three = num5/100 % 10;
    digit_four = num5/1000 % 10;
    digit_five = num5/10000 % 10;
    if ((digit_one == 1 && digit_five == 1 || digit_one == 8 && digit_five == 8|| digit_one == 6 && digit_five == 9 || digit_one == 9 && digit_five == 6)&&(digit_two == 1 && digit_four == 1 || digit_two == 8 && digit_four == 8|| digit_two == 6 && digit_four == 9 || digit_two == 9 && digit_four == 6|| digit_two == 0 && digit_four == 0)&&(digit_three == 1 || digit_three == 8 || digit_three == 0)){
        howmany5++;
    }
    return howmany5;
}
int main(){
    int howmany = 0;
    int h = 0;
    int l;
    int length;
    int a;
    int b;

    cin >> h;
    cin >> l;
    if(h == l){
        formula1(h,howmany);
        formula2(h,howmany);
        formula3(h,howmany);
        formula4(h,howmany);
        formula5(h,howmany);
        cout << howmany << endl;
        return 0;
    }
    formula1(h,howmany);
    formula2(h,howmany);
    formula3(h,howmany);
    formula4(h,howmany);
    formula5(h,howmany);
    do{
        h++;
        a = jf(h,length);
            if(a == 1)
                formula1(h,howmany);
            if(a == 2)
                formula2(h,howmany);
            if (a == 3)
                formula3(h,howmany);
            if(a == 4)
                formula4(h,howmany);
            if(a == 5)
                formula5(h,howmany);

        
    }while(h != l);           
    cout << howmany << endl;

    return 0;
}