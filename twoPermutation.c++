#include<iostream>
using namespace std;
void solve(){
  int n,a,b;
  cin>>n>>a>>b;
  if(a+b>=n){
    if(a==b and b==n){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }

  }
  else{
    int diff = n-a-b;
    if(diff>1){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
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