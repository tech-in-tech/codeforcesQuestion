#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n,a,b;
  cin>>n>>a>>b;
  int dis = abs(a-b);
  if(dis%2==1){
    cout<<"NO\n";
  }
  else{
    cout<<"YES\n";
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