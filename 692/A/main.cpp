#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == ')') {
            cnt++;
        } else {
            break;
        }
    }
    if (s.size() - cnt >= cnt) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}