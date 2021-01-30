#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    int n, k;
    int x = 1;
    cin >> n >> k;
    x = ceil(1.0 * n / k);
    x = ceil(x * k * 1.0 / n);
    cout << x << endl;
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}