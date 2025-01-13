#include<iostream>
#include<vector>
using namespace std;
void solve(){
  long long n;
  cin>>n;
  vector<long long> v(n);
  vector<long long> freq(n+1,0);
  for(int i=0;i<n;i++){
    cin>>v[i];freq[v[i]]++;
  }
  vector<long long> visited(n+1,0);
  vector<long long> ans;
  for(long long i = 0;i<n;i++){
    if(freq[v[i]]>0){
      ans.push_back(v[i]);
      freq[v[i]] = 0;
      visited[v[i]] = 1;
    }
  }
  for(long long i = 1;i<=n;i++){
    if(ans.size()==n){
      break;
    }
    if(!visited[i]){
      ans.push_back(i);
    }
  }
  for(long long i = 0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  cout<<"\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}