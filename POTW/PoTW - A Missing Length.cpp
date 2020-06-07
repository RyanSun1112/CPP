#include <bits/stdc++.h>

using namespace std;

int main() {
    int BF = 13;
    int BD = 13;
    int BE = 13;
    int BC;
    int CE = 1;
    int DB = 13;
    int DC;
    int AF;
    BC = BE - CE;
    DC = DB * DB - BC * BC;
    DC = sqrt(DC);
    AF = BF - DC;
    cout << "BF, BD, BE, DB are all raduis, so that means its 13cm" << endl;
    cout << "BC = BE - CE = " << BC << endl;
    cout << "DC = sqaure root of (DB * DB - BC * BC) = " << DC << endl;
    cout << "AF = BF - DC = " << AF << endl;
    cout << "the distance of AF is 8" << endl;
 

    return 0;
}