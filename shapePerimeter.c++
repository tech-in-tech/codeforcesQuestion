#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve(){
  int n,l;
  cin>>n>>l;
  vector<vector<int>> vec(n,vector<int> (2));
  for(int i = 0;i<n;i++){
    for(int j = 0;j<2;j++){
      cin>>vec[i][j];
    }
  }
  int ans = 0;
  int length = l;
  int height = l;
  for(int i = 1;i<n;i++){
    length+=vec[i][0];
    height+=vec[i][1];
  }
  ans = (2*height)+(2*length);
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