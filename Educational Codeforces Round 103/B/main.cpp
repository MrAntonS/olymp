#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    long long n, k, sum = 0, res = 0;
    cin >> n >> k;
    long long x;
    cin >> x;
    sum = x; 
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        if (100 * x - k * sum >= 0) {
            res += ceil((100.0 * x - k * sum) / k);
            sum += x + ceil((100.0 * x - k * sum) / k);
        } else {
            sum += x;
        }
    }
    cout << res << endl;
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}