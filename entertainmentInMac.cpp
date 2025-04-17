#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  long long  n;
  cin>>n;

  string s;
  cin>>s;

  string rev = s;
  reverse(rev.begin(),rev.end());

  string ans;
  if(n%2==0){
    if(s<=rev){
      ans = s;
    }
    else{
      ans = rev+s;
    }
  }
  else{
    if(rev<=s){
      ans = rev;
    }
    else{
      ans = s+rev;
    }
  }
  cout<<ans<<"\n";


}
int main(){
  long long t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}