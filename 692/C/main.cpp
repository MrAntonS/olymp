#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

bool check(vector<pair<int, int>> &a, int &m) {
    int cnt = 0;
    for (auto &i : a) {
        if (i.first == i.second) {
            cnt++;
        }
    }
    if (m == cnt) {
        return true;
    }
    return false;
}

bool comp (pair<int, int> &a, pair<int, int> &a1) {
    return a.second < a1.second;
}

void solve() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    vector<int> coord(n, n);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        if (x == y) continue;
        coord[x] = y;
        cnt++;
    }
    
    for (int i = 0; i < n; i++) {
        if (coord[i] == n) continue;
        int to = coord[i];
        coord[i] = n;
        while (coord[to] != n && to != i) {
            int curr = to;
            to = coord[to];
            coord[curr] = n;
        }
        if (to == i) cnt++;
    }
    cout << cnt << endl;
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}