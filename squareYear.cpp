#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
  string s;
  int n  = stoi(s);
  if(int (sqrt(n) * int(sqrt(n))==n)){
    cout<<"0 "<<int(sqrt(n))<<"\n";
  }
  else {
    cout<<"-1\n";
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}