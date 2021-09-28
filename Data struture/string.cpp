#include <bits/stdc++.h>

using namespace std;

int main(){ 
    string cool = "Watermelon";
    string cool_1 = "is";
    char good[4] = {'G', 'O', 'O', 'D'};
    string h = "watergood";
    string j = "wateergood";
    string d = "cool";
    string str = "cool";
    size_t e = str.find("cool"); 

    int x;
    getline(cin, str);
    cin >> x;
    cout << x << endl;
    cin >> ignore();
    cout << str << endl;

    if(e == string::npos)
        cout <<"not found" << endl;
    else
        cout << "found" <<endl;
    
    cout << cool[7]<< endl;

    cool_1 = cool_1 + "Good Good.";
    cout << "adding;"<< cool_1 << endl;
    cout << cool.length() << endl;        
    
    cout << "good equals"<< good << endl;
    
    h = h.insert (5," is ");
    cout << "Insert"<< h << endl;
    
    j = j.substr(3,2);
    cout <<"subtract:"<< j << endl;
    
    d = d.replace(1,2 ,"oi");
    cout <<" replace:"<< d << endl;

    return 0;
}