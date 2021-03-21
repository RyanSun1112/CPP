#include <bits/stdc++.h>

using namespace std;

int main(){         
    map<char, string> my_map = {
       {'a', "Kevin"},
       {'A', "Gavin"},
       {'b', "Devlin"},
       {'B', "Chris"}, 
    };
    cout << my_map['A'] << endl;

    for(auto &item : my_map){
        cout << item.first << " " << item.second << endl;
    }

    my_map['c'] = "Gina";

    my_map ['a'] = "Fern";


    my_map.erase('b');

    if(my_map.count('A') > 0)
        cout << "my_map[2] has a value" << endl;
    else    
        cout << " my_map[2] does not have a value " << endl;

    int has_key = my_map.count('a');

    if(has_key > 0){
        if(my_map.count('a') > 0)
        
    }     
    return 0;
}