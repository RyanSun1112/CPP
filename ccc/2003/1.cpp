#include <bits/stdc++.h>

using namespace std;

int main() {
   int c, length, width;
                                 //console in 
    while (cin >> c) {                     //if the area was 0, i would not be a rectangle
        if (c == 0)
            break;
            
        length = sqrt(c);                      //finding dimestions. it won't be a decimal cause it's a integer 
        width = c/length;

        while (length * width != c) {              // if dimestion doesn't equal area
            length = length - 1;    
            width = c/length;
        }
                                             //putting it together
        cout << "Minimum perimeter is " << ( length + width) * 2 << " with dimensions " << length << " x " << width << endl;
    }

    return 0;
}