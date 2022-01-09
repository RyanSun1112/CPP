#include <bits/stdc++.h>

using namespace std;
void array(){
    int array[7] = {62,23,43,34,38,923,12};
    int target = 923;
    auto itr = find(array, array+7, target);

    if(itr != end(array)){
        cout << distance(array,itr) << endl;
        cout << "Found" << endl;
    }else{
        cout << "Not Found" << endl;
    }
    
}

void vec(){
    vector <int> vec = { 34, 54,1234,3434,354,32};
    int target = 3434;

    auto itr = find(vec.begin(), vec.end(),target);
    if(itr != vec.end())
        cout <<"Index="<< itr - vec.begin() << endl;
    else
        cout <<"Not Found" << endl;
}
void chara(){
    string str = "Good Day";
    auto itr = str.find('e');
    if(str.find('e') != string::npos){
        cout << "index:" << itr << endl;
    }else{
        cout << "Not FOund" << endl;
    }
}
void str(){
    string str = "Good Day";
    auto itr = str.find('Good');
    if(str.find('Good') != string::npos){
        cout << "index of 'Good'" << itr << endl;
    }else{
        cout << "Not FOund" << endl;
    }
}
int main(){         
    return 0;
}