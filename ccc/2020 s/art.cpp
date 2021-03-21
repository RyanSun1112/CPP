#include <bits/stdc++.h>

using namespace std;
int comma_index(string a,int howmany){
    int comma_index;
    for(int c = 0; c < 5;c++){
        if(a[c] = ',')
            comma_index = c;
    }        

    return comma_index;
}
int main(){         
    int howmany;
    int comma_index2[howmany];
    cin >> howmany;
    string coordinates[howmany];
    for(int i = 0; i < howmany;i++){
        cin >> coordinates[i];
        comma_index2[i] = comma_index(coordinates[i],howmany);
    }
    int first_digit = 0;
    int second_digit = 0;

    for(int v = 0; v < howmany;v++){
        if(comma_index2[v] = 1){
            
            second_digit = coordinates[v].size() - first_digit;
        
        }if(comma_index2[v] = 2){
            geek >> first_digit;
            first_digit = first_digit * 10;
            first_digit += coordinates[v];
            second_digit = coordinates[v].size() - first_digit;
        }else{
            first_digit = 3;
            second_digit = coordinates[v].size() - first_digit;
        }

    }
    

    


    



    return 0;
}