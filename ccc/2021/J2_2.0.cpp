#include <bits/stdc++.h>

using namespace std;

int main(){         
    int howmany;
    cin >> howmany;
    string names;
    int bid;
    map <string ,int> cool; 
    string first;
    int firstbid = 0;
    for(int i = 0; i < howmany;i++){
        cin >> names >> bid;
            cool[names] = bid; 
            if(cool[names] > firstbid){
                bid = firstbid;
                first = names;
            }
    }
    cout << first << endl;

    return 0;
}