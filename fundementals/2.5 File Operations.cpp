#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("open this in the morning");
    string i = "wake up";
    fout << i;

    ifstream fin ("file.out");
    string str;
    fin >> str;
    cout << str;
    fin >> str;
    cout << str;


    ifstream cin ("fundementals/file.in");
    int x , y , z;
    cin >> x;
    cin >> y;
    cin >> z;

    int hi = 0;
    cout << ++hi << endl;
    cout << "hi =" << hi << endl;

    cout << hi++ << endl;
    cout << "hi ="<< hi << endl;
 
    
    return 0;
}
