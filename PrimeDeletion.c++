#include<iostream>
using namespace std;
void solve(){
  string n;
  cin>>n;
  for(auto ele:n){
    if(ele=='1') {
      cout<<"13\n";
      break;
    }
    if(ele=='3'){
      cout<<"31\n";
      break;
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