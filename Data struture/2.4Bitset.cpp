#include <bits/stdc++.h>

using namespace std;
void change_bit_to_string(){

    int x = 5;
    cout << bitset<16>(x)<< endl;
    string binary_str = bitset<16>(x).to_string();
    cout << "bits string:" << binary_str << endl;
    cout << binary_str[2] << endl;

    cout << bitset <8> (x) [3] << endl;
    cout << bitset <16> (x) [0] << endl;
    cout << bitset <8> (x).test(3) << endl;
    for(int i = 0; i < 16; i++)
       cout << bitset <16> (x) [i] << endl; 
    bitset <16> (x).test(3);
}
int main(){        
    // bitset <4> cool(14);
    // cool.set(2,0);
    // cool.set(3,1);
    // cool.reset(7);
    // cout << cool << endl;
    // bitset <4> cool2(0);
    change_bit_to_string();
    // cout << cool2 << endl; 
    // bitset <16> cool3("00000000000000000000");
    // cout<< "Memory size is:" << sizeof(cool3) << endl;
    // cool3.set(21,1);
    // cout << cool3 << endl;
    // bitset <8> cool2("10000001");
    // cout << cool3 << endl;              // 0000000
    // cool3.set(1,1);                  
    // cout << cool3 << endl;           // 0000010
    // cool3.reset(1);
    // cout << cool3 << endl;          // 0000000

    // cout << cool3.to_ulong() << endl; 
    // cout << cool3.to_ullong() << endl; 
    // cout << cool3.to_string() << endl; 
    

    // cout << "The highest bit 7 is " << binary_str[7] << endl;
    // cout << "The highest bit 7 is " << binary_str[0] << endl;
    // bitset <8> result;
    // result = cool2 & cool3;
    // cout << "result equals" << result << endl;
    // result = cool2 | cool3;
    // cout <<"Result equals" << result << endl;

    return 0;
}