#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  int a,b,c;
  cin>>a>>b>>c;
  // odd - katai turn
  if(c%2==0){
    if(a>b) cout<<"First\n";
    else cout<<"Second"<<"\n"; 
  }

  // even - anna turn;
  else{
    if(a>=b) cout<<"First\n";
    else cout<<"Second\n";
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
