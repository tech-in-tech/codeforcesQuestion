#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin>>s;
  sort(s.rbegin(),s.rend());
  cout<<s<<"\n";
}

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}