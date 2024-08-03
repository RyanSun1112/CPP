#include <bits/stdc++.h>

using namespace std;

int main(){         
    int howmany;
    cin >> howmany;
    bool day2s[howmany][5];
    for(int i = 0; i < howmany; i++){
            string days;
            cin >> days;
            for( int v = 0; v < 5; v++){
                if(days[v] == 'Y')
                    day2s[i][v] = true;
                else
                    day2s[i][v] = false;           }
    
    }
    int avaible[5] = {0};
    for(int i = 0; i < howmany; i++){
        for(int v = 0; v < 5;v++){
            if(day2s[i][v] == true){
                avaible[v] += 1;
            }

        }
    }
    int highest = 0;
    int output1[5] = {0};
    for(int i = 0; i < 5;i++){
        if(avaible[i] > highest){
            highest = avaible[i];
            output1[0]={0};
            output1[1]={0};
            output1[2]={0};
            output1[3]={0};
            output1[4]={0};
            output1[i] = i+1;
        }else if(avaible[i] == highest){
            
            highest = avaible[i];
            output1[i] = i+1;
        }
    }
            
        
    int output[5] = {0};
    int counter = 0;
    for(int i = 0; i < 5; i++){
        if(output1[i] > 0){
            output[counter] = output1[i];
            counter++;
        }
    }
    for(int i = 0; i < counter-1; i++)
        cout << output[i] << ",";
    cout << output[counter-1];
    
    return 0;
}