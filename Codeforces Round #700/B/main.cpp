#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    int a, b, n;
    cin >> a >> b >> n;
    vector<pair<int, int>> attack(n);
    int maxi = 0;
    for (auto &i : attack) {
        cin >> i.first;
        maxi = max(maxi, i.first);
    }
    cout << maxi << endl;
    for (auto &i : attack) cin >> i.second;
    ll damage = 0;
    for (auto &i : attack) {
        ll n = (i.second + a - 1) / a;
        damage += n * i.first;
    }
    if (damage - maxi < b) {
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