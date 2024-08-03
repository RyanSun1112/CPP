#include <bits/stdc++.h>

using namespace std;
char grid[10000][10000];
int total = 0;
void explore(int x, int y, int directionx, int directiony, int factorx, int factory){
    if(factorx != 0 && factory != 0){
        if(grid[x+factorx][y] == '*'|| grid[x][y+factory] == '*'||x+factorx<0|| y+factory <0 ){
            return;
        }
    }
    if(grid[x+factorx][y+factory] == '*' ||x+factorx<0|| y+factory <0){
        return;
    }
    
    else if(grid[x+factorx][y+factory]== 'L'){
        total += 10;
        grid[x+factorx][y+factory]= '*';
    }
    else if(grid[x+factorx][y+factory] == 'M'){
        total += 5;
        grid[x+factorx][y+factory]= '*';

    }
    else if(grid[x+factorx][y+factory] == 'S'){
        total += 1;
        grid[x+factorx][y+factory] = '*';
    }
    explore(x+1,y,directionx+1, directiony, 1, 0);
    explore(x,y+1,directionx, directiony+1, 0, 1);
    explore(x+1,y+1,directionx + 1, directiony+1, 1, 1);
    explore(x,y-1,directionx, directiony-1, 0, -1);
    explore(x-1,y,directionx-1, directiony, -1, 0);
    explore(x-1,y-1,directionx-1, directiony-1, -1, -1);
    explore(x+1,y-1,directionx+1, directiony-1, 1, -1);
    explore(x-1,y+1,directionx-1, directiony+1, -1, 1);
}
int main()
{
    
    int a, b ,c;
    cin >> a >> b >> c;
    int total = b;
    int day = 1;

    while(a > total){
        total += c**day;
        day++;
    }
    cout << day << endl;
   
    
    return 0;
}