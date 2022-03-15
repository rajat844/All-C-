#include <bits/stdc++.h>

using namespace std;

int  fun(int n){
  if(n==0) return 0;
  else return (n+fun(n-1));
}

int main() {
    int x ;
    cin>>x;
    cout<< fun(x);
    return 0;
}