#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool prime(int& a) {
    for (int i = 2; i * i < a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

void test() {
    int d;
    vector<int> p;
    cin >> d;
    for (int i = d + 1; i < 1000000; i++) {
        if (prime(i)) {
            p.push_back(i);
            break;
        }
    } 
    cout << "a";
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        test();
    }
}