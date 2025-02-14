#include<iostream>
using namespace std;
void solve(){
  string s;
  cin>>s;
  string ans = "";
  for(int i = 0;i<s.size()-2;i++){
    ans+=s[i];
  }
  ans+='i';
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