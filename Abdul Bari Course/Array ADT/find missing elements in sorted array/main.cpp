#include <bits/stdc++.h>

using namespace std;

vector<int> missingElements(vector<int> arr) {
    vector<int> ans;
    int diff = arr.front();

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] - i != diff) {
            while (diff < arr[i] - i) {
                ans.push_back(i + diff);
                diff++;
            }
        }
    }
    return ans;
}

int main() {

    int n;
    cin >> n;
    vector<int> arr1(n);

    for (int i = 0; i < n;i++) {
        cin >> arr1[i];
    }

    vector<int> ans = missingElements(arr1);

    for(auto x: ans){
        cout<<x << " ";
    }
    return 0;
}