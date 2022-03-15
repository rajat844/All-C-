#include <bits/stdc++.h>

using namespace std;
vector<int> winning(int num, int lower, int upper) {
    vector<int> ans;
    int n = upper - lower + 1;
    if (num > 2*n -1 ){
        ans.push_back(-1);
        return ans;
    }

    int start = upper-1;
    int end;
    for(int i = 1; i<num;i++){
        end = upper-i+1;        
    }

    if(end >= lower){
        ans.push_back(upper-1);
        for(int i = 1;i<num;i++){
            ans.push_back(upper-i+1);
        }
    }
    else{
        while(end < lower){
            start--;
            end++;
        }
        for(int i = start; i<=upper-1;i++){
            ans.push_back(i);
        }
        for(int i = upper; i>=end;i--){
            ans.push_back(i);
        }
    }

    return ans;
}


int main() {
    int num, lowerEnd, upperEnd;

    cin >> num >> lowerEnd >> upperEnd;

    vector<int> sequence = winning(num, lowerEnd, upperEnd);

    for (auto i : sequence) cout << sequence[i];

    return 0;
}