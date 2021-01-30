#include <bits/stdc++.h>
#define ll long long 
#define ld long double
using namespace std;
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
bool check(ll a, ll d) {
    while (a > 0) {
        if (a % 10 == d) {
            return true;
        }
        a /= 10;
    }
    return false;
}
 
void solve() {
    int q, d;
    cin >> q >> d;
    for (int i = 0; i < q; i++) {
        ll a;
        bool f = true;
        cin >> a;
        while (a > 0) {
            if (check(a,d)) {
                cout << "YES" << endl;
                f = false;
            }
            if (!f) {
                break;
            }
            a -= d;
        }
        if (f)
        cout << "NO" << endl;
    }
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
