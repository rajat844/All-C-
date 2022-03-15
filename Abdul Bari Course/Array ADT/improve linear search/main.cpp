#include <bits/stdc++.h>

using namespace std;

int improved_bs1(int arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            swap(arr[i], arr[i - 1]);
            return i;
        }
    }
    return -1;
}
int improved_bs2(int arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            swap(arr[i], arr[0]);
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    int arr[n];



    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << improved_bs1(arr, n, k) << endl;
    cout << improved_bs2(arr, n, k) << endl;





    return 0;
}