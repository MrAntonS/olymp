#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;
 
void solve() {
    ll a, b, n;
    cin >> a >> b >> n;
    vector<pair<int, int>> attack(n);
    int maxi = 0;
    for (auto &i : attack) {
        cin >> i.first;
        maxi = max(maxi, i.first);
    }
    for (auto &i : attack) cin >> i.second;
    int cnt = 0;
    for (auto &i : attack) {
        b -= 1LL *  i.first * ceil(1.0 * i.second / a);
    }
    if (b > 0 || (b <= 0 && abs(b) < maxi)) {
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