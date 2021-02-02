#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    int n, m;
    cin >> n;
    vector<int> r(n);
    int x;
    cin >> x;
    int maxi1 = 0, maxi2 = 0;
    r[0] = x;
    maxi1 = max(r[0], maxi1);
    for (int i = 1; i < n; i++) {
        cin >> x;
        r[i] = r[i - 1] + x;
        maxi1 = max(r[i], maxi1);
    }
    cin >> m;
    vector<int> b(m);
    cin >> x;
    b[0] = x;
    maxi2 = max(b[0], maxi2);
    for (int i = 1; i < m; i++) {
        cin >> x;
        b[i] = b[i - 1] + x;
        maxi2 = max(b[i], maxi2);
    }
    cout << max(0, maxi1 + maxi2) << endl;
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}