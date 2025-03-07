#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  long long n;
  cin>>n;
  if(n==1){
    cout<<"YES\n";
    return;
  }
  if(n==2){
    cout<<"NO\n";
    return;
  }
  if(n==3) {
    cout<<"NO\n";
    return ;
  }
  if(n%3==1) cout<<"YES\n";
  else cout<<"NO\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}


/*
s f h

s-f    h
f-h    s 

*/