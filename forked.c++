#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
int dx[4] = {-1,1,-1,1},dy[4] = {-1,-1,1,1};
void solve(){
  int a,b,xk,yk,xq,yq;
  cin>>a>>b>>xk>>yk>>xq>>yq;
  set<pair<int,int>> king,queen;
  for(int i = 0;i<4;i++){
    king.insert({xk+dx[i]*a,yk+dy[i]*b});
    king.insert({xk+dx[i]*b,yk+dy[i]*a});
    
    queen.insert({xq+dx[i]*a,yq+dy[i]*b});
    queen.insert({xq+dx[i]*b,yq+dy[i]*a});
  }
  int ans=  0;
  for(auto ele:king){
    if(queen.find(ele)!=queen.end()){
      ans++;
    }
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