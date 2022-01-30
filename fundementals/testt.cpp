#include <bits/stdc++.h>

using namespace std;
    int howmany = 1;
    int input1, input2;
    vector <int> difference;

bool vaild(int cycle){
    // int yes = 0;
    // while(yes + cycle < howmany - 1){
    for(int w = 0; w + cycle < howmany - 1; w++){
        if(difference[w] != difference[w+cycle]){
            return false;
        }
    }
    return true;
}

int main(){
    while (cin >> howmany){
        if(howmany == 0)
            break;
        if(howmany == 1){
            cout << 0 << endl;
        }

        difference.clear();
        cin >> input1;
        for(int i = 0; i < howmany - 1; i++){
            cin >> input2;
            difference.push_back(input2-input1);
            input1 = input2;
        }
            
        for(int i = 1; i < howmany;i++){
            if(vaild(i)){
                cout << i << endl;
                break;
            }
        }
        // if(yes == 0){
        //     cout << difference.size();
        // }
    }
    // int array[7] = {3, 4, 6, 4, 5, 7, 5};
    // vector <int> difference;

    // for(int i = 0; i < 6; i++)
    //     difference.push_back(array[i+1] - array[i]);
    

    // for(int i = 0; i < difference.size(); i++)
    //     cout << difference[i] <<endl;
int x;
ceil(x);
return 0;
}
