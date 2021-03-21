#include <bits/stdc++.h>

using namespace std;

int main(){         
    set <int> g;
    set <char> cool = {'r','t', 'v' , 'd'};

    cool.insert('c');
    cool.insert('r');
    cool.insert('d');
    cool.insert('f');
    cout << cool.size() << endl;

    for(auto item : cool)
        cout << item << " ";
    cout << endl;

    for(auto it = cool.begin(); it != cool.end(); it++)
        cout << *it;

    cool.erase(1);

    unordered_set <int> cool1; 

    cool1.insert(1);
    cool1.insert(4);
    cool1.insert(2);
    cool1.insert(5);

    auto it = cool.begin();   

    it++;
    cout << *it;

    advance(it,2);
    cout << *it; 

    auto it2= cool.find(4);
    if(it != cool.end()){
        cout << &it2 << endl;
        cout << *it2 << endl;
        cout << "found" << endl;
    }else{
        cout << &it2 << endl;
        cout << *it2 << endl;
        cout << "Not Found" << endl;
    }





    return 0;
}