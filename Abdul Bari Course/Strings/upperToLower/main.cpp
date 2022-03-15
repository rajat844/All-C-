#include <bits/stdc++.h>

using namespace std;

string toUpper(string s){
    for(int i = 0; i<s.size(); i++){
        s[i] -= 32;
    }
    return s;
}

int main(){
    string s;
    cin>>s;

    cout<<toUpper(s);
    return 0;
}