#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n,m;
  cin>>n>>m;

  vector<vector<int>> mat(n,vector<int> (m));
  int mx = 0;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      cin>>mat[i][j];
      mx = max(mx,mat[i][j]);
    }
  }


  map<int,int> row,col;
  int count = 0;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++)
      if(mat[i][j]==mx){
        count++;
        row[i]++;
        col[j]++;
      }
  }

  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      if(row[i]+col[j]-(mat[i][j]==mx)==count){
        cout<<mx-1<<"\n";
        return;
      }
    }
  }
  cout<<mx<<"\n";
}


int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}