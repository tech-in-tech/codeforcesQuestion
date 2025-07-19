#include<iostream>
#include<vector>
using namespace std;

void solve(){
  int n,s;
  cin>>n>>s;
  vector<int> v(n);
  for(int i = 0;i<n;i++){
    cin>>v[i];
  }

  int ans = 0;
  // case 1
  if(v[0]<s and v[n-1]>s){
    ans = (v[n-1]-v[0])+min(s-v[0],v[n-1]-s);
  }

  // case 2
  if(s<=v[0]){
    ans = v[n-1]-s;
  }

  // case 3
  if(s>=v[n-1]){
    ans = s-v[0];
  }

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