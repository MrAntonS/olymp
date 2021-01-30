#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) {
        int n;
        cin >> n;
        while (n % 2020 != 0 && n > 0) {
            n -= 2021;
        }
        if (n == 0 || n % 2020 == 0 && n > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}