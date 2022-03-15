#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int fxn(vector<int> villages) {
    sort(villages.begin(), villages.end());
    priority_queue<int> pq;

    for (int i = 0; i < villages.size(); i++) {
        pq.push(villages[i]);
    }

    int count = 0;

    while (pq.top() != 0) {
        int temp1 = pq.top();
        pq.pop();
        temp1--;
        count++;

        if (pq.top() != 0) {
            int temp2 = pq.top();
            pq.pop();
            temp2--;
            count++;
            pq.push(temp2);
        }
        else return count;
        pq.push(temp1);

    }
    return count;
}

int main() {
    vector<int> villages;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        villages.push_back(a);
    }
    int ans = fxn(villages);
    cout << ans;
}



