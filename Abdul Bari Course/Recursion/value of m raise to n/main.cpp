#include <bits/stdc++.h>

using namespace std;

// int fun(int m, int n) {
//     if (n == 0) return 1;
//     if (m == 0 || m == 1) return 1;

//     else return (m * fun(m, n - 1));
// }

int fun(int m, int n) {
    if (n == 0) return 1;
    if (m == 0 || m == 1) return 1;

    if (n % 2 == 1) return (m * fun(m *m , (n - 1)/2));
    else {
        m = m * m;
        n = n / 2;
        return fun(m, n);
    }

}

int main() {
    int n;
    int m;
    cin >> m >> n;
    cout << fun(m, n);

    return 0;
}