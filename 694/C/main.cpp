#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> k(n);
    vector<pair<int, bool>> c(m);
    for (auto &i : k) cin >> i;
    for (auto &i : c) {
        cin >> i.first;
        i.second = true;
    }
    sort(k.rbegin(), k.rend());
    ll res = 0;
    for (int i = 0; i < n; i++) {
        if (i < m) {
            if (c[i] < c[k[i] - 1]) {
                res += c[i].first;
            } else {
                res += c[k[i] - 1].first;
            }
        } else {
            res += c[k[i] - 1].first;
        }
    }
    cout << res << endl;
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}