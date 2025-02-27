#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  int k,q;
  cin>>k>>q;
  vector<int> v(k);
  for(int i = 0;i<k;i++){
    cin>>v[i];
  }
  while(q--){
    int n;
    cin>>n;
    cout<<min((v[0]-1),n)<<"\n";
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