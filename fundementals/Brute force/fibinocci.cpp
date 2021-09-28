#include <bits/stdc++.h>

using namespace std;
int n1=0,n2=1,n3,number,i = 1; 

int fibionnci2(){
    cout <<"Enter the number of elements: ";    
    cin >> number;   
    if(number == 1){
        cout << 1 << endl;
        return 0;   
    }
    while(i != number){    
        n3 = n1 + n2;       
        n1 = n2;    
        n2 = n3;
        i++;    
        if(i == number){
            cout << n3 << endl;
            return 0;
        }   
    }    
}   
int fibionnci(){
    cout <<"Enter the number of elements: ";    
    cin >> number;    
    cout << n1 << " " << n2 << " "; //printing 0 and 1    
    for (i = 1; i < number;i++){    
        n3 = n1 + n2;    
        cout << n3 << " ";    
        n1 = n2;    
        n2 = n3;    
    }    

}
int main(){           
    //fibionnci();
    fibionnci2(); 
    return 0;
}