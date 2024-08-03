#include <bits/stdc++.h>

using namespace std;

int main()
{
   int input=-1;
   int size;
   cin >> size; 
   while(true){
        cin >> input;
        if(input < size){
            size += input;
        }else if(input >= size){
            break;
        }
   }
   cout << size;
    return 0;
}