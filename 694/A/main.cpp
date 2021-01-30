#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

/*

Change

*/

void solve() {
    ll n, x;
    ll sum = 0;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &i: a) {
        cin >> i;
        sum += i;
    }
    ll k = ceil(1.0 * sum / x);
    cout << k << ' '; 
    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ceil(1.0 * a[i] / x);
    }
    cout << sum << endl;
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
