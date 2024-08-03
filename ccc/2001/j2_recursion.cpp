#include <bits/stdc++.h>

using namespace std;
int recursion(int x, int y,int i){
    if((x*i)%y == 1){
        cout << i << endl;
        return 0;
    }
    if(i > y){
        cout << "No such integer exists." << endl;
        return 0;
    }
    recursion(x,y,i+1);
    
}
int main(){ 
    int i = 0;        
    int input1, input2;
    cin >> input1 >> input2;
    recursion(input1,input2,i);
    return 0;
}