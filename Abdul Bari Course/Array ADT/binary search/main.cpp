#include <bits/stdc++.h>

using namespace std;

void helper(int arr[], int l, int h, int& mid, int k) {
    if (l > h) {
        mid = -1;
        return;
    }
    mid = l + (h - l) / 2;
    
    if (arr[mid] == k) return;
    else if (arr[mid] > k) helper(arr, l, mid - 1, mid, k);
    else helper(arr, mid + 1, h, mid, k);
}

int binarySearch(int arr[], int n, int k) {
    sort(arr, arr + n);
    int l = 0;
    int h = n - 1;
    int mid;
    helper(arr, l, h, mid, k);
    return mid;
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

    cout << binarySearch(arr, n, k) << endl;


    return 0;
}


