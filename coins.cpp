#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  long long n,k;
  cin>>n>>k;
  if(k == n){
    cout << "YES\n";
    return;
  }
  if(k % 2 == 0 && n % 2 != 0){
    cout << "NO\n";
    return;
  }
  if(k % 2 != 0 && n % 2 != 0){
    cout << "YES\n";
    return;
  } else {
    cout << "YES\n";
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