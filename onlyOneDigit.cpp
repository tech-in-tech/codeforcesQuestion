#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
  int x;
  cin>>x;
  string s = to_string(x);
  sort(s.begin(),s.end());
  char ch = s[0];
  int ans = ch-'0';
  cout<<ans<<"\n";
}

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}


