#include <bits/stdc++.h>

using namespace std;
int recursion(int n,int sum){
    if(n == 0) // if(n == 100)
        return sum;
    recursion(n-1,sum+=n); //recursion(n+1,sum+=n); 
}
int recursion(int start,int stop){
    
}
void gauss(){
    int sum = (100*(100+1))/2;
    cout << sum << endl;
}
int main(){ 
    int sum = 0;
    int n=100; // n = 1
    
    sum = recursion(n,sum);
    cout << sum << endl;
    gauss();
    
    return 0;
}