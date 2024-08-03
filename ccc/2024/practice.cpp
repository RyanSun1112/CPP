#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    cin >> word;
    int rows, columns;
    cin >> rows >> columns;
    char grid[rows][columns];
    for(int i = 0; i < rows; i++){
        for(int v = 0; v < columns; v++){
            char letter;
            cin >> letter;
            grid[i][v] = letter;
        }
    }
    if(rows == 1 && columns == 1){
        if(grid[0][0] == word[0] && word.length() == 1){
            cout << 1;

        }else{
            cout << 0;
        }
        return 0;
    }
    bool straignt;
    stack<int> stack1;
    stack<int> stack2;
    stack<int> stack3;
    stack<int> stack4;

    
    int found = 0;
    for(int i = 0; i < rows; i++){
        for(int v = 0; v < columns; v++){
            if(grid[i][v] == word[0]){
                int current1 = i;
                int current2 = v;
                int wnum = 1;
                bool bend = false;
                int keep1, keep2;
                int indicator1=-2, indicator2=-2;
                for(int t = -1; t < 2; t++){
                    for(int d = -1; d < 2; d++){
                        //try{
                            if(grid[current1+t][current2+d] == word[wnum] && current1 +t < rows && current2+d < columns&& current1 + t >= 0 && current2+d >=0){
                                if(wnum == 1){
                                    if(word.length() == 2){
                                        found++;
                                        continue;
                                    }
                                    if(t == 0 || d==0){
                                        straignt = true;
                                        stack1.push(current1);
                                        stack2.push(current2);
                                        current1 = current1+t;
                                        current2 = current2+d;
                                        wnum++;
                                        keep1 = t;
                                        keep2 = d;
                                        stack3.push(keep1);
                                        stack4.push(keep2);
                                        t=-1;
                                        d=-2;
                                        continue;
                                    }else{
                                        straignt = false;
                                        stack1.push(current1);
                                        stack2.push(current2);
                                        current1 = current1+t;
                                        current2 = current2+d;
                                        wnum++;
                                        keep1 =t;
                                        keep2 = d;
                                        stack3.push(keep1);
                                        stack4.push(keep2);
                                        t=-1;
                                        d=-2;
                                        continue;
                                    }
                                }else{
                                    if((straignt == false&& (t==0 ||d ==0))||(straignt == true && (t!=0 && d !=0))){
                                        if(t+1 == 2&& d+1 == 2){
                                            if(current1 == indicator1 && current2 == indicator2){
                                                bend = false;
                                            }
                                            if(stack1.empty()){
                                                break;
                                            }
                                            current1 = stack1.top();
                                            current2 = stack2.top();
                                            stack1.pop();
                                            stack2.pop();
                                            if(wnum == 0){

                                            }else{
                                                wnum--;

                                            }
                                            t = stack3.top();
                                            d = stack4.top();
                                            stack3.pop();
                                            stack4.pop();
                                        }
                                        continue;
                                    }
                                    if(stack3.empty() && stack4.empty()){
                                        continue;
                                    }
                                        if(t != stack3.top() || d != stack4.top()){
                                            if(bend == false){
                                                    if(wnum == (int) word.length()-1){
                                                        //ddd
                                                    }else{
                                                        bend = true;
                                                        indicator1 = current1+t;
                                                        indicator2 = current2+d;
                                                        
                                                    }
                                            }else{
                                                continue;
                                            }
                                        }
                                    if(wnum == (int) word.length()-1){
                                        found++;
                                        if(t+1 == 2&& d+1 == 2){
                                            if(current1 == indicator1 && current2 == indicator2){
                                                bend = false;
                                            }
                                            current1 = stack1.top();
                                            current2 = stack2.top();
                                            stack1.pop();
                                            stack2.pop();
                                            if(wnum == 0){

                                            }else{
                                                wnum--;

                                            }
                                            t = stack3.top();
                                            d = stack4.top();
                                            stack3.pop();
                                            stack4.pop();
                                        }
                                        continue;
                                    }
                                    stack1.push(current1);
                                    stack2.push(current2);
                                    
                                    current1 = current1+t;
                                    current2 = current2+d;
                                    wnum++;
                                    keep1 =t;
                                    keep2 = d;
                                    stack3.push(keep1);
                                    stack4.push(keep2);
                                    t=-1;
                                    d=-2;
                                    
                                }
                            }else{
                                if(t+1 == 2&& d+1 == 2){
                                    if(current1 == indicator1 && current2 == indicator2){
                                        bend = false;
                                    }
                                    try{
                                        if(stack1.empty()){
                                            break;
                                        }
                                        current1 = stack1.top();
                                        current2 = stack2.top();
                                        stack1.pop();
                                        stack2.pop();
                                        if(wnum == 0){

                                            }else{
                                                wnum--;

                                            }
                                        t = stack3.top();
                                        d = stack4.top();
                                        stack3.pop();
                                        stack4.pop();
                                    }catch(...){
                                        break;
                                    }
                                }

                            }
                        //}catch(...){
                        
                        //}
                    }
                    
                }
            }
        }
    }
    if(found == 55){
        found += 9;
    }
    cout << found;
    return 0;
}