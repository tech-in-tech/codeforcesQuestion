#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  vector<vector<int>> grid(n,vector<int>(n));
  for(int i= 0;i<n;i++){
    for(int j =0;j<n;j++){
      cin>>grid[i][j];
    }
  }
  int ans = 0;
  for(int i= 0;i<n;i++){
    int t= i,maxi = 0;
    for(int j = 0;j<n;j++){
      if(t>=n) break;
      if(grid[t][j]<0) maxi = max(maxi,-1*grid[t][j]);
      t++;
    }
    ans+=maxi;
  }

  for(int j= 1;j<n;j++){
    int t= j,maxi = 0;
    for(int i = 0;i<n;i++){
      if(t>=n) break;
      if(grid[i][t]<0) maxi = max(maxi,-1*grid[i][t]);
      t++;
    }
    ans+=maxi;
  }
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