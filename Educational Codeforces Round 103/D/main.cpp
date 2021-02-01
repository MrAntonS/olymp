#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<vector<int>> a(n + 1);
    vector<vector<int>> a1(n + 1);
    vector<int> res(n + 1, 0);
    string s;
    cin >> s;
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
                } else if (!chet && s[j] == 'L') {
                    cnt++;
                    chet = !chet;
                    last = j + 1;
                } else break;
            }
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