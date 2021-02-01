#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

int dfs(vector<vector<int>> &a, vector<vector<int>> &a1, int last, int b, bool step, int cnt) {
    if (step) {
        for (auto &i : a[b]) {
            if (last == i) continue;
            else {
                cnt = dfs(a, a1, b, i, !step, cnt + 1);
            }
        }
    } else {
        for (auto &i : a1[b]) {
            if (last == i) continue;
             else {
                cnt = dfs(a, a1, b, i, !step, cnt + 1);
            }
        }
    }
    return cnt;
}

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> a(n + 1);
    vector<vector<int>> a1(n + 1);
    string s;
    cin >> s;
    // for (int i = 1; i <= n; i++) {
    //     if (s[i - 1] == 'L') {
    //         a[i].push_back(i - 1);
    //         a1[i - 1].push_back(i);
    //     } else {
    //         a[i - 1].push_back(i);
    //         a1[i].push_back(i - 1);
    //     }
    // }
    // for(int i = 0; i < n + 1; i++) {
    //     cout << dfs(a, a1, -1, i, true, 1) << ' ';
    // }
    int c = 1;
    bool bk = true;
    for (int j = 0; j < n; j++) {
        if (s[j] == 'R' && bk) {
            c++;
            bk = !bk;
        } else if (s[j] == 'L' && !bk) {
            c++;
            bk = !bk;
        } else {
            break;
        }
    }
    cout << c << ' ';
    for (int i = 0; i < n; i++) {
        bool bk = true, f = true;
        int cnt = 1;
        for (int j = i; j >= 0; j--) {
            if (s[j] == 'L' && bk) {
                cnt++;
                bk = !bk;
            } else if (s[j] == 'R' && !bk) {
                cnt++;
                bk = !bk;
            } else {
                break;
            }
        }
        for (int j = i + 1; j < n; j++) {
            if (s[j] == 'R' && f) {
                cnt++;
                f = !f;
            } else if (s[j] == 'L' && !f) {
                cnt++;
                f = !f;
            } else {
             break;
            }
        }
        cout << cnt << ' ';
    }
    cout << endl;
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}