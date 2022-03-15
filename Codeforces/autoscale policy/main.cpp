#include <bits/stdc++.h>

using namespace std;

int fn(vector<int> averageUtil, int instance) {
    int i = 0;
    while (i < averageUtil.size()) {
        if (averageUtil[i] < 25 and instance >1) {
            instance = instance / 2;
            i += 10;
        }
        else if (averageUtil[i] > 60 and instance * 2 < 217) {
            instance = instance * 2;
            i += 10;
        }
        i++;

    }
    return instance;

}

int main() {
    int n;
    cin >> n;

    vector<int> averageUtil(n);
    for (int i = 0; i < n; i++) {
        cin >> averageUtil[i];
    }

    int instance;
    cin >> instance;

    int ans = fn(averageUtil, instance);
    cout<<ans;


    return 0;
}