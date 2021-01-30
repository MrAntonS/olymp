#include <bits/stdc++.h>
#define ll long long 
#define ld long double
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<ll> v(n);
    vector<ll> a, b;
    
    for (auto &i : v) {
        cin >> i;
    }
    for (auto &i : v) {
        int x;
        cin >> x;
        if (x == 1) {
            a.push_back(i);
        } else {
            b.push_back(i);
        }
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    int r = b.size();
    int ans = INT_MAX;
    ll CurSumA = 0;
    ll CurSumB = accumulate(b.begin(), b.end(), 0ll);
    for (int l = 0; l <= a.size(); l++) {
        while (r > 0 && CurSumA + CurSumB - b[r - 1] >= m) {
            r--;
            CurSumB -= b[r];
        }
        if (CurSumB + CurSumA >= m) {
            ans = min(ans, 2 * r + l);
        }
        if (l != a.size()) {
            CurSumA += a[l];
        }
    }
    cout << (ans == INT_MAX ? -1 : ans) << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}