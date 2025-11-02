#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  vector<int> vec(2*n);
  for(int i = 0;i<2*n;i++){
    cin>>vec[i];
  }
  sort(vec.begin(),vec.end());

  int res = (vec[n]-vec[n-1]);
  cout<<res<<"\n";

}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}