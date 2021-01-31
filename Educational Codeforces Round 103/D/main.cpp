#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void dfs(vector<vector<int>> &a, vector<int> c, int b) {
    c[b] = 1;
    for (auto &i : a[b]) {
        if (c[i] == 1) cout << "Cycle" << endl;
        else dfs(a, c, i);
    }
    c[b] = 0;
    return;
}

void solve() {
    
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}