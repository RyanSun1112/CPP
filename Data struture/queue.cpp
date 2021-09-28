#include <bits/stdc++.h>

using namespace std;
void priority(){
    
    priority_queue <int> f;

    f.push(5);
    f.push(9);
    f.push(2);

    while(!f.empty()){
        cout << f.top() << endl;
        f.pop();
    }
//     priority_queue <int, vector <char>, greater<char>> dw;
//     priority_queue <int, vector<int>, greater<int>> f;
}
void queue1(){

    queue <int> k;

    int c;

    for ( int i = 0; i < 5;i++){
        cin >> c;
        k.push(c);
    }
    k.pop();

    cout << k.front() << endl;
    cout << k.back() << endl;

    cout << k.size() << endl;

    k.push(6);

    while(!k.empty()){
        cout <<k.front() << endl;
        k.pop();
    }
    

}
int main(){ 
    priority();        
    queue1();
    cout << "____________________" << endl;

    return 0;
}