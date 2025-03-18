#include<iostream>
using namespace std;
void solve(){
  int l,r,d,u;
  cin>>l>>r>>d>>u;
  if(l==r and r==d and d==u){
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
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