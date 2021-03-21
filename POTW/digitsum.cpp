#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int input = 10;       
    
    for(int i = 0; i < input; i++)
        for(int j = 0; j < input; j++)
            for(int h = 0; h < input; h++)
                for(int y= 0; y < input; y++)
                    for(int s = 0; s < input; s++)
                        if((i + j + h + y + s) == input)
                            cout << i << j << h << y << s << endl;
    
        
    return 0;
}