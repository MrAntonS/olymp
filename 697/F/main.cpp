#include <bits/stdc++.h>
#define ll long long 
#define ld long double
using namespace std;



void solve() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int> (n)), b(n, vector<int> (n));
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        for (int j = 0; j < n; j++) {
            a[i][j] = (int) x[j] - 48;
        }
    }
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        for (int j = 0; j < n; j++) {
            b[i][j] = (int) x[j] - 48;
        }
    }

    for (int i = 0; i < n; i++) {
        if(a[0][i] != b[0][i]) {
            for (int j = 0; j < n; j++)
            {
                a[j][i] = abs(a[j][i] - 1);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] != b[i][0]) {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = abs(a[i][j] - 1);
            }
        }
    }
    if (a == b) {
        cout << "YES" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}