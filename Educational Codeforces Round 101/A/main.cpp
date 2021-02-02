#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    string s;
    cin >> s;
    stack<int> a;
    int cnt = 0;
    bool f = false, f1 = false;
    for (int i = 0;i < s.size(); i++) {
        if (s[i] == '(') {
            a.push(s[i]);
            if (f) {
                f1 = true;
            }
        }
        if (s[i] == ')') {
            if (!a.empty()) {
                a.pop();
            } else {
                if (cnt > 0) {
                    f = true;
                    cnt--;
                } else {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        if (s[i] == '?') {
            cnt++;
            if (f1) {
                a.pop();
                cnt--;
                f1 = false;
                f = false;
            }
        }
    }
    if (a.empty() && cnt % 2 == 0) {
        cout << "YES" << endl;
        return;
    } else {
        cout << "NO" << endl;
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