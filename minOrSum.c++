#include<iostream>
#include<vector>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  int s = 0;
  for(int i = 0;i<n;i++){
    cin>>v[i];
    s|=v[i];
  }
  cout<<s<<"\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}