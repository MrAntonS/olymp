#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) {
        string a, res = "";
        int last = -1, n;
        cin >> n >> a;
        for (int i = 0; i < n; i++) {
            if (int(a[i]) + 1 != last) {
                res += "1";
                last = int(a[i]) + 1;
            } else {
                res += "0";
                last = int(a[i]);
            }
        }
        cout << res << endl;
    }
}