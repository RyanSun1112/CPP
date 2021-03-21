#include <bits/stdc++.h>

using namespace std;

int main(){         
    int howmany;
    cin >> howmany;
    string names[howmany];
    int bid[howmany];
    string first;
    int firstbid;
    for(int i = 0; i < howmany;i++){
        cin >> names[i] >> bid[i];
            if(bid[i] > firstbid){
                first = names[i];
                firstbid = bid[i];
            }else if(i == 0){
                firstbid = bid[i];
                first = names[i];
            }
    }
    cout << first << endl;


    return 0;
}