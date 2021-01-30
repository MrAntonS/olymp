#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    vector<int> a;
    int n, x;
    bool f = true;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k % x) {
            f = false;
        }
        a.push_back(k);
    }
    ll sum = 0;
    int i = 0;
    vector<int> b = a;

    for (auto &o : a){
            sum += o;
        }
        
    while (b[i] % x == 0) {
        sum += a[i];
        b[i] /= x;
        i++;
        i = i % n;
    }

    cout << sum << endl;
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}