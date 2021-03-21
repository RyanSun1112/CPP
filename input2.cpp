#include <bits/stdc++.h>

using namespace std;

int main(){  
    int lines_of_code;
    int howmany;
    char thing;
    cin >> lines_of_code;
    do{
        cin >> howmany >> thing;
        char j[howmany];
        for(int i = 0; i <= howmany - 1; i++)
            j[i] = thing;
        for(int i = 0; i <= howmany - 1; i++)
            cout << j[i];
        cout << endl;
        lines_of_code--;

    }while(lines_of_code != 0);

    return 0;
}