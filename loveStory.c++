#include<iostream>
using namespace std;
void solve(){
  string s;
  cin>>s;
  string a = "codeforces";
  int ans = 0;
  for(int i=0;i<s.size();i++){
    if(s[i]!=a[i]){
      ans++;
    }
  }
  cout<<ans<<"\n";
}
int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}