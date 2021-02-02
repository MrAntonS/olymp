#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    int n, k;
    bool g = true;
    cin >> n >> k;
    int x;
    cin >> x;
    for (int i = 1; i < n; i++) {
        int j;
        cin >> j;
        if (i == 1 && j - x >= k && j - x > 0) {
            g = false;
        }
        if (i == 1 && j - x < 0 && (x - j) - (k - 1) >= k) {
                g = false;
            }
        if (i == n - 1 && x - j >= k && x - j > 0) {
            g = false;
        }
        if (i == n - 1 && x - j < 0 && (j - x) - (k - 1) >= k) {
                g = false;
            } 
        if (abs(x - j) - (k - 1) >= k) {
            g = false;
        }
        x = max(j, abs(x - j) + (k - 1));
    }
    if (g) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}