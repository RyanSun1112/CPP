#include <bits/stdc++.h>

using namespace std;

int main(){         
    vector <int> vect = {2,34,19,30,213,54,2345,64};
    vect.push_back(1000);
    // cout << vect[3] << endl;
    // for(int i = 0; i < vect.size();i++)
    //     cout << vect[i]<< endl;
    // for(auto item : vect)
    //     cout << item << endl;
    sort(vect.begin(),vect.end());
    for(int i = 0; i < vect.size();i++)
        cout << vect[i] << " " << endl;
    sort(vect.begin(),vect.end(),greater<>());
    for(int i = 0; i < vect.size();i++)
        cout << vect[i] << " " << endl;
    sort(vect.begin(),vect.begin() + 2);
    for(int i = 0; i < vect.size();i++)
        cout << vect[i] << " " << endl;
    vect.insert(vect.begin() + 2, 21);
    for(int i = 0; i < vect.size();i++)
        cout << vect[i] << " " << endl;
    vect.pop_back();
    for(int i = 0; i < vect.size();i++)
        cout << vect[i] << " " << endl;
    vect.erase(vect.begin());
    for(int i = 0; i < vect.size();i++)
        cout << vect[i] << " " << endl;
    vect.erase(vect.begin() + 1);
    for(int i = 0; i < vect.size();i++)
        cout << vect[i] << " " << endl;
    
    return 0;
}