#include <bits/stdc++.h>

using namespace std;
void check(int start, int end) {
    for (int x = start; x <= end; x += 60)      // 60 is least common mutilple of 5, 4, 3, 2. so that mean each of the jobs re-elect every 60 years.
        cout << "All positions change in year " << x << endl;
}

int main() {
    int start, end;
    cin >> start >> end;       // console in

    check(start, end); 

    return 0;
}