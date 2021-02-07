#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (i & 1) {
            if (s[i] != 'z') {
                s[i] = 'z';
            } else {
                s[i] = 'y';
            }
        } else {
            if (s[i] != 'a') {
                s[i] = 'a';
            } else {
                s[i] = 'b';
            }
        }
    }
    cout << s << endl;
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}