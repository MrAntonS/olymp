#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;
vector<vector<int>> g;
int dfs(vector<vector<vector<pair<int, int>>>> &a, bool f, int i, int j, int len, pair<int,int> last) {
        if (f) g[i][j] = 1;
        else g[i][j] = g[last.first][last.second] + 1;
        int maxi = -1;
        for (auto &k : a[i][j]) {
            // if (i == 1 &&  j == 1) {
            //      for (auto &i : g) {
            //     for (auto &j : i) {
            //         cout << j << ' ';
            //     }
            //     cout << endl;
            // }
            // }
            // cout << k.first << ' ' << k.second << endl;
            if (g[k.first][k.second] == 0) {
                int x = dfs(a, false, k.first, k.second, len + 1, {i, j});
                 if (x == -1) {
                     g[k.first][k.second] = 0;
                     continue;
                 } else {
                     g[k.first][k.second] = 0;
                     maxi = max(maxi, x);
                     continue;
                 }
            } if (g[k.first][k.second] == 1 &&(k.first != last.first || k.second != last.second)) {
                return len;
            } if (g[k.first][k.second] > 1 && (k.first != last.first || k.second != last.second)) {
                maxi = max(-1, maxi);
                continue;
            }
        }
        // for (auto &i : g) {
        //         for (auto &j : i) {
        //             cout << j << ' ';
        //         }
        //         cout << endl;
        //     }
        //     cout << maxi << endl;
        return max(-1, maxi);
}
 
void solve() {
    int n;
    cin >> n;
    vector<vector<vector<pair<int, int>>>> a(n);
    g.resize(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i].resize(x);
        g[i].resize(x, 0);
        for (int j = 0; j < x - 1; j++) {
            a[i][j].push_back({i, j + 1});
            a[i][j + 1].push_back({i, j});
        }
    }
    int o;
    cin >> o;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        x--; 
        a[i][0].push_back({i-1, x});
        a[i - 1][x].push_back({i, 0});
    }
    cin >> o;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        x--; 
        a[i][a[i].size()-1].push_back({i-1, x});
        a[i - 1][x].push_back({i, a[i].size()-1});
    }
    
    // for (auto &i : a) {
    //     for (auto &j : i) {
    //         for (auto &k : j) {
    //             cout << k.second << ' ' << k.first << ' ';
    //         }
    //         cout << endl;
    //     }
    //     cout << "---------------------" << endl;
    // } 
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        maxi = max(dfs(a, true, i, 0, 1, {-1,-1}), maxi);
        // cout << "_-----------------------_"<< endl;
        for (auto &i : g) {
            for (auto &j : i) {
                j = 0;
            }
        }
    }
    cout << maxi << endl;
    
}
 
int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}