#include <bits/stdc++.h>

using namespace std;

int main(){  
    int howmany;
    char thing;
    int lines_of_code;
    cin >> lines_of_code;
    do{
        cin >> howmany >> thing;
        for(int i = 1; i <= howmany; i++)
            cout << thing;
        cout << endl;
        lines_of_code--;

    }while(lines_of_code != 0);

    return 0;
}