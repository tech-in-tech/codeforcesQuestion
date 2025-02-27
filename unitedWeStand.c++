#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  long long n;
  cin>>n;
  vector<long long> a(n);
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  long long maxEle = *max_element(a.begin(),a.end());
  vector<long long> b,c;
  for(int i = 0;i<n;i++){
    if(a[i]!=maxEle){
      b.push_back(a[i]);
    }
    else{
      c.push_back(a[i]);
    }
  }
  if(b.size()==0){
    cout<<-1<<"\n";
  }
  else{
    cout<<b.size()<<" "<<c.size()<<"\n";
    for(auto it:b){
      cout<<it<<" ";
    }
    cout<<"\n";
    for(auto it:c){
      cout<<it<<" ";
    }
    cout<<"\n";
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