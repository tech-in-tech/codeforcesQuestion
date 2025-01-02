#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  int ans = 1;
  sort(v.begin(),v.end());
  v[0]+=1;
  for(auto ele:v){
    ans*=ele;
  }
  cout<<ans<<"\n";
 
}
int main(){
  int t;
  cin>>t; 
  while (t--)
  {
    solve();
  }
  
  return 0;
}