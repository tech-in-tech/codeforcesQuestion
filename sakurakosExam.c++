#include<iostream>
using namespace std;
void solve(){
  int a,b;
  cin>>a>>b;
  b%=2;
  if(a%2){
    cout<<"NO\n";
  }
  else if(b==0 || a>=2){
    cout<<"YES\n";
  }
  else cout<<"NO\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}