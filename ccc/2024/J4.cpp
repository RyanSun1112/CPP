#include <bits/stdc++.h>

using namespace std;

int main()
{
   string correct;
   string incorrect;
   cin >> correct >> incorrect;
   set <char> numberOfletter1;
   set <char> numberOfletter2;
  
   for(int i = 0; i < correct.length(); i++){
    
        numberOfletter1.insert(correct[i]);
   }
   for(int i = 0; i < incorrect.length(); i++){
    
    numberOfletter2.insert(incorrect[i]);
    }
    string better1 = "";
    string better2 = "";
    for(auto item : numberOfletter1)
        better1 += item;
    for(auto item : numberOfletter2)
        better2 += item;
    string wrong = "";
    bool wrong2 = true;
    for(int i =0; i < better1.length();i++){
        wrong2 = true;

        for(int v = 0; v < better2.length(); v++){
            if(better1[i] == better2[v]){
                wrong2 = false;
                break;
            }
        }
        if(wrong2 == true){
            wrong +=better1[i];
        }
    }
    for(int i =0; i < better2.length();i++){
        wrong2 = true;
        for(int v = 0; v < better1.length(); v++){
            if(better2[i] == better1[v]){
                wrong2 = false;
                break;
            }
        }
        if(wrong2 == true){
            wrong +=better2[i];
        }
    }
    
    int numberfor1 =0;
    int numberfor2 =0;
    int numberfor3 =0;
    
    for(int i =0; i < correct.length();i++){
        if(wrong[0] == correct[i]){
            numberfor1++;
        }
        if(wrong[1] == correct[i]){
            numberfor2++;
        }
        if(wrong[2] == correct[i]){
            numberfor3++;
        }
    }
    if(correct.length()== incorrect.length()){
        cout << wrong[0] << " " << wrong[1] << endl;
        cout << "-";
    }
    else if(wrong.length() < 3){
        cout << wrong[0] << " " << incorrect[0] << endl;
        cout << wrong[1];
    }
    else if(correct.length() - numberfor2 == incorrect.length()){
        cout << wrong[0] << " " << wrong[2] << endl;
        cout << wrong[1];
    }else if(correct.length() - numberfor1 == incorrect.length()){
        
        cout << wrong[1] << " " << wrong[2] << endl;
        cout << wrong[0];
    }
    
    return 0;
}