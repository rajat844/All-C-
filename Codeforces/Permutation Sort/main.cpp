#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int max = INT_MIN;
        int min = INT_MAX;
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
        int test = 0;
        for (int i = 0; i < n-1;i++) {
            if (arr[i] > arr[i + 1]) {
                test = 1;
                break;
            }
        }
        if (test == 0)
            cout << "0" << endl;
        else {
            if (arr[0] == min || arr[n - 1] == max) {
                cout << "1" << endl;
            }
            else if (arr[0] == max && arr[n-1] == min) {
                cout << "3" << endl;
            }
            else
                cout << "2" << endl;
        }
    }
}