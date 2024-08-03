#include <bits/stdc++.h>

using namespace std;

int main(){         
    int howmany;
    cin >> howmany;
    int total_spice = 0;
    string pepper;
    for(int i = 0; i < howmany; i++){
        cin >> pepper;
        if(pepper == "Poblano")
            total_spice += 1500;
        if(pepper == "Mirasol")
            total_spice += 6000;
        if(pepper== "Serrano")
            total_spice += 15500;
        if(pepper == "Cayenne")
            total_spice += 40000;
        if(pepper == "Thai")
            total_spice += 75000;
        if(pepper == "Habanero")
            total_spice += 125000;

    }
    cout << total_spice << endl;
    return 0;
}