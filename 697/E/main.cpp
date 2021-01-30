#include <bits/stdc++.h>
#define ll long long 
#define ld long double
using namespace std;
const int mod = 1e9 + 7;
int fact(ll a) {
    ll res = 1;
    for (auto i = 1; i <= a; i++) {
        res *= i;
        res %= mod;
    }
    return res;
}
int fast_pow(int a, int p) {
  int res = 1;
  while (p) {
    if (p % 2 == 0) {
      a = a * 1ll * a % mod;
      p /= 2;
    } else {
      res = res * 1ll * a % mod;
      p--;
    }
  }
  return res;
}

int C (int n, int k) {
	int res = 1;
	for (int i=n-k+1; i<=n; ++i) {
		res *= i;
        res %= mod;
    }
	for (int i=2; i<=k; ++i) {
		res /= i;
    }
    return res;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> cnt(n, 0);
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        x--;
        cnt[x]++;
        
    }
    for (int i = cnt.size() - 1; i >= 0; i--) {
        if (k > cnt[i]) {
            k -= cnt[i];
        } else {
            cout << fact(n) * 1ll * fast_pow(fact(k), mod - 2) % mod * 1ll * fast_pow(fact(n - k), mod - 2) % mod<< endl;
            break;
        }
    }
    
    
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}