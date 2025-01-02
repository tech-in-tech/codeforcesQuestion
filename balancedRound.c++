#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n,k;
  cin>>n>>k;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  int l =1 ,cnt = 1;
  for(int i=1;i<n;i++){
    if(v[i]-v[i-1]<=k){
      cnt++;
    }
    else{
      cnt = 1;
    }
    l = max(l,cnt);
  }
  cout<<n-l<<"\n";

}
int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}