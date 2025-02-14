#include<iostream>
using namespace std;
void solve(){
  int l,r;
  cin>>l>>r;
  int x = l;
  if(x*2<=r) cout<<x<<" "<<x*2<<"\n";
  else cout<<-1<<" "<<-1<<"\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}