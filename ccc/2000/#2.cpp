#include <bits/stdc++.h>

using namespace std;
bool cool(int a){
    int yes = 0;
    int idk[6], length = 0;
    do{
        length++;
        idk[length] = a % 10;
        a = a / 10;
    }while(a != 0);

    for(int d = 1; d <= length;d++){
        if(idk[d] = 1)
            return true;
        else
            return false; 
    }
}
int main(){
    int start;
    int end;
    int yes = 0;
    cin >> start >> end;
    for(int i = start; i <= end; i++){
        if (cool(i))  
            yes++;
    }
    cout << yes << endl;
    return 0;
}