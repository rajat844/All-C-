#include <bits/stdc++.h>

using namespace std;

int fun(int x, int percision) {
    static int power = 1;
    static int factorial = 1;

    if(percision == 0) return 1;

    else return (fun())
}

int main() {
    int x;
    int percision;

    cin >> x >> percision;

    cout << fun(x, percision);

    return 0;
}