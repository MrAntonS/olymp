#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define IO  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void solve() {
    ll n, i;
    cin >> n;
    i = n;
    while (true) {
        ll temp = i;
        while (temp > 0) {
            if (temp % 10 == 0) {
                temp /= 10;
                continue;
            }
            if (i % (temp % 10) != 0) break;
            temp /= 10;
        }
        if (temp == 0) {
             cout << i << endl;
             break;
        }
        i++;
    }   
}

int main() {
    IO
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}