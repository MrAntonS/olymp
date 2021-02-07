#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> a1;
    vector<int> a2;
    for (auto &i : v) cin >> i;
    int last = -1;
    for (auto &i : v) {
        if (last != i) {
            a1.push_back(i);
            last = i;
        } else {
            a2.push_back(i);
        }
    }
    a2.erase(unique(a2.begin(), a2.end()), a2.end());
    cout << a1.size() + a2.size() << endl;
}

int main() {
    IO
    int t = 1;
    while(t--) {
        solve();
    }
}