#include <bits/stdc++.h>

using namespace std;
int check(vector<int> list) {
    int maxbox = 0;
    sort(list.begin(), list.end());
    if (list[0] >= 1) {
        list[0] == 1;
    }
    else return 0;
    for (int i = 1; i < list.size();i++) {
        if (list[i] >= i + 1) {
            list[i] = i + 1;
        }
        else {
            maxbox = list[i - 1];
        }
    }
    int  ans = (maxbox == 0) ? list.back() : maxbox;
    return ans;
}


int main() {
    int n;
    cin >> n;
    vector<int> list(n);
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }
    int ans = check(list);
    cout << n;


    return 0;
}