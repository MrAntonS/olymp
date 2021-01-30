#include <bits/stdc++.h>
#define ll long long 
#define ld long double
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, bool>> a(n);
    for (auto &i : a) {
        cin >> i.first;
        i.second = true;
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].second) {
            int last = a[i].first;
            res++;
            a[i].second = false;
            for (int j = i; j < n; j++) {
                if (a[j].first > last && a[j].second) {
                    last = a[j].first;
                    a[j].second = false;
                }
            }
        }
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}