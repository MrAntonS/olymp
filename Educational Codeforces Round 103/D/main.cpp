#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

// int dfs(vector<vector<int>> &a, vector<vector<int>> &a1, int last, int b, bool step, int cnt) {
//     if (res[b]) return res[b];
//     if (step) {
//         for (auto &i : a[b]) {
//             if (res[b]) return res[b];
//             if (last == i) continue;
//             else {
//                 cnt = dfs(a, a1, b, i, !step, cnt + 1);
//             }
//         }
//     } else {
//         for (auto &i : a1[b]) {
//             if (res[b]) return res[b];
//             if (last == i) continue;
//              else {
//                  if (res[i]) {
//                     res[b] = res[i];
//                     break;
//                 }
//                 cnt = dfs(a, a1, b, i, !step, cnt + 1);
//             }
//         }
//     }
//     return cnt;
// }

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> a(n + 1);
    vector<vector<int>> a1(n + 1);
    vector<int> res(n + 1, 0);
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
    //     res[i] = dfs(a, a1, -1, i, true, 1);
    //     cout << res[i]  << ' ';
    //     for (auto &i : res) {
    //         cout << i << ' ';
    //     }
    //     cout << endl;
    // }
    for(int i = 0; i < n + 1; i++) {
        bool chet = true;
        int last = i;
        int cnt = 1;
        if (res[i] <= 1) {
            for (int j = i; j < n; j++) {
                if (chet && s[j] == 'R') {
                    cnt++;
                    chet = !chet;
                    last = j + 1;
                    // if (j == 1) {
                    //     cout << 'A' << endl;
                    // }
                } else if (!chet && s[j] == 'L') {
                    cnt++;
                    chet = !chet;
                    last = j + 1;
                    // if (j == 1) {
                    //     cout << 'A' << endl;
                    // }
                } else break;
            }
            // if (i == 1) {
            //     cout << cnt << endl;
            // }
            res[i] += cnt;
            for (int j = i; j <= last; j++) {
                if ((j - i) % 2 == 0) {
                    res[j] = res[i];
                } if (j + 1 > last && j + 1 < n + 1 && (j + 1 - i) % 2 && res[j + 1] < 1) {
                    res[j + 1] += 1;
                }
            }
        }
    }
    for (auto &i : res) {
                cout << i << ' ';
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