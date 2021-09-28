#include <bits/stdc++.h>

using namespace std;

int main(){         
    queue <string> playlist;
    string song;

    while(song != "end"){
        cin >> song;
        if(song == "end")
            break;
        playlist.push(song);
    }
    cout << "My Playlist:" << endl;
    while(!playlist.empty()){
        cout << playlist.front() << endl;
        playlist.pop();
    }
    return 0;
}