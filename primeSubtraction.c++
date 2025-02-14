#include<iostream>
using namespace std;
void solve(){
  long long x,y;
  cin>>x>>y;
  long long diff= x-y;
  if(diff==1){
    cout<<"NO\n";
  }
  else{
    cout<<"YES\n";
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