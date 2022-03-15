#include <bits/stdc++.h>

using namespace std;

int  cutoffRank(vector<int> scores, int cutoff) {
    if (scores.size() < 1 || cutoff <= 0) return 0;
    int rank = 1;
    int sameRank = 0;
    sort(scores.begin(), scores.end());
    int i = 0;

    for (i = scores.size() - 1; i >= 0;i--) {
        if (scores[i] == 0) break;
        if (rank >= cutoff) break;
        if (i != 0 and scores[i] == scores[i - 1]) {
            sameRank++;
        }
        else {
            rank++;
            rank += sameRank;
            sameRank = 0;
        }
    }
    int num = scores.size();
    if (i == 0) {
        if (rank <= cutoff) {
            return num;
        }
    }
    return num - i - 1;
}

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    for (int i = 0; i < n;i++) {
        cin >> scores[i];
    }

    int cutoff;
    cin >> cutoff;

    int ans = cutoffRank(scores, cutoff);
    cout << ans;



    return 0;
}