#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    if (n % 2 == 0) {
        cout << (k - 1) % n + 1 << endl;
    } else {
        cout << ((k - 1) + (k - 1) / (n / 2)) % n + 1 << endl;
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