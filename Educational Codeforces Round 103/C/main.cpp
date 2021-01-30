#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    for (auto &i : c) {
        cin >> i;
    }
    for (auto &i : a) {
        cin >> i;
    }
    for (auto &i : b) {
        cin >> i;
    }
    ll ans = 0, sum = 0;
    sum = c[n - 1];
    for (int i = n - 1; i >= 1; i--) {
        sum += 2;
        if (a[i] > b[i]) swap(a[i], b[i]);
        ans = max(ans, sum - 1 + b[i] - a[i] );
        if (a[i] == b[i]) {
            sum = c[i - 1];
        } else {
            sum += (a[i] - 1);
            sum += (c[i-1] - b[i]);
        }
        sum = max(sum, c[i-1]);
    }
    cout << ans << endl;
}


int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}