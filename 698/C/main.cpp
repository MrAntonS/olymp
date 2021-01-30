#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<ll> d(2 * n);
    for(int i = 0; i < 2 * n; i ++)
        cin >> d[i];

    sort(d.begin(), d.end());
    d.erase(unique(d.begin(), d.end()), d.end());

    if(d.size() != n){
        cout << "NO\n";
        return;
    }

    ll sum = 0ll;
    bool flag = 1;
    for(int i = n - 1; i >= 0; i --){
        if((d[i] - 2 * sum) % (2 * (i + 1)) != 0 || (d[i] - 2 * sum) <= 0){
            flag = 0;
            break;
        }

        sum += 1ll * ((d[i] - 2 * sum) / (2 * (i + 1)));
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}