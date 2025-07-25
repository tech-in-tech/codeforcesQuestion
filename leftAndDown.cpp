#include<iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
  long long  a,b,k;
  cin>>a>>b>>k;
  long long GCD = __gcd(a,b);
  long long dx = a/GCD;
  long long dy = b/GCD;
  if(dx<=k && dy<=k){
    cout<<1<<"\n";
  }
  else{
    cout<<2<<"\n";
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