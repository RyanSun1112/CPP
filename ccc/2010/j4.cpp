#include <bits/stdc++.h>

using namespace std;

int main(){         
    int number_of_temp = 1;
    int counter = 0;
    int yes = 0;
    while (number_of_temp != 0){
        cin >> number_of_temp;
        int temp[number_of_temp];
        int differeces[number_of_temp] = {0};
        if(number_of_temp == 0){
            break;
        }
        if(number_of_temp == 1){
            cout << 0 << endl;
            for(int i = 0; i < number_of_temp; i++){
                cin >> temp[i];
            }
        }else{
            for(int i = 0; i < number_of_temp; i++){
                cin >> temp[i];
            }
            for(int v = 0; v < number_of_temp; v++){
                if(yes == 1)
                    break;
                if(counter == 0)
                    v++;
                differeces[v] = temp[v] - temp[v-1];
                counter++;
                for(int h = 0; h < counter; h++){
                    if(differeces[v] == differeces[h]){
                        cout << counter - 1 << endl;
                        counter = 0;
                        yes++;
                    }
                }
            }
            if(yes == 0){
                cout << counter << endl;
            }
            yes = 0;


    }
        

    }
    return 0;
}