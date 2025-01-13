#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<long long> vec(n);
  vector<long long> ans(100001,0);

  for(long long i = 0;i<n;i++){
    cin>>vec[i];
    ans[vec[i]]++;
  }

  for(long long i = 0;i<100001;i++){
    while(ans[i]>0){
      cout<<i<<" ";
      ans[i]--;
    }
  }
}
int main(){
  ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
  solve();
  return 0;
}