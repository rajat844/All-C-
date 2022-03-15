#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        int b = 100;
        int c = __gcd(a, b);
        a = a / c;
        b = b / c;
        cout << b << endl;

    }
    return 0;
}
