#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int c = count(s.begin(),s.end(),'.');
  bool flag = false;
  for(int i = 0;i<n-2;i++){
    if(s[i]=='.' and s[i+1]=='.' and s[i+2]=='.'){
      flag = true;
      break;
    }
  }
  if(flag){
    cout<<2<<"\n";
    return;
  }
  else{
    cout<<c<<"\n";
    return;
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