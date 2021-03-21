#include <bits/stdc++.h>

using namespace std;

int main(){
    int Byron;
    int Nikky;
    int steps[4];                                   // steps[0] = Nikky forward
    int goal;                                       // steps[1] = Nikky backward
                                                    // steps[2] = Byron forward
                                                    // steps[3] = Byron backward
    for(int i = 0; i < 4;i++)
        cin >> steps[i];
    cin >> goal;
    
    int howmany_rounds_for_Nikky = goal / (steps[0] + steps[1]);
    Nikky = howmany_rounds_for_Nikky * (steps[0] - steps[1]);
    int Nikky_leftover = goal % (steps[0] + steps[1]);
    if(Nikky_leftover <= steps[0])
        Nikky = Nikky + Nikky_leftover;
    else
        Nikky = Nikky + (steps[0] - (Nikky_leftover - steps[0]));
    
    int howmany_rounds_for_Byron = goal / (steps[2] + steps[3]);
    Byron = howmany_rounds_for_Byron * (steps[2] - steps[3]);
    int Byron_leftover = goal % (steps[2] + steps[3]);
    if(Byron_leftover <= steps[2])
        Byron = Byron + Byron_leftover;
    else   
        Byron = Byron + (steps[2] - (Byron_leftover - steps[2]));

    if(Byron > Nikky)
        cout << "Byron"<< endl;
    else if(Byron < Nikky)
        cout << "Nikky"<< endl;
    else
        cout << "Tied" << endl;
    
    return 0;
}