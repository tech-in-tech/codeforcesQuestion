#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n,m;
  cin>>n>>m;
  vector<vector<int>> matrix(n,vector<int>(m));
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      cin>>matrix[i][j];
    }
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