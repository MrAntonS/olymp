#include <bits/stdc++.h>
#define ll long long 
#define ld long double
using namespace std;

void solve() {
    int A, B, k;
    cin >> A >> B >> k;
    vector<int> a(A), b(B);
    vector<pair<int, int>> edges(k);
    for (auto &[x, y] : edges) {
        cin >> x;
    }
    for (auto &[x, y] : edges) {
        cin >> y;
    }
    for (auto &[x, y] : edges) {
        x--;
        y--;
        a[x]++;
        b[y]++;
    }
    ll ans = 0;
    for (auto &[x, y] : edges) {
        ans += k - a[x] - b[y] + 1;
    }
    cout << ans / 2 << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}