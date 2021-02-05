#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

bool check(vector<int> &h) {
    for (int i = 1; i < h.size(); i++) {
        if (h[i] > h[i - 1]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n, k, curSum = 0, needSum = 0, mini = 1e9, cnt, res = -1;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    while (!check(h) && k > 0) {
        for (int i = 1; i < n; i++) {
            if (h[i] > h[i - 1]){
                res = i;
                k -= 1;
                h[i - 1] += 1;
                break;
            }
        }
    }
    if (k > 0) {
        cout << -1 << endl;
        return;
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