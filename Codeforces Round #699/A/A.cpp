#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    int px, py, x = 0, y = 0;
    string s;
    cin >> px >> py >> s;
    for (auto i : s) {
        if (i == 'U') {
            if (abs(py - y) > abs(py - (y + 1))) {
                y++;
            }
        }
        if (i == 'D') {
            if (abs(py - y) > abs(py - (y - 1))) {
                y--;
            }
        }
        if (i == 'R') {
            if (abs(px - x) > abs(px - (x + 1))) {
                x++;
            }
        }
        if (i == 'L') {
            if (abs(px - x) > abs(px - (x - 1))) {
                x--;
            }
        }
    }
    if (x == px && y == py) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}