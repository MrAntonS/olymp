#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) {
        long long d;
        cin >> d;
        if (d & (d - 1)) {
            cout << "YES" << endl;
        } else { 
            cout << "NO" << endl;
        }
    }
}