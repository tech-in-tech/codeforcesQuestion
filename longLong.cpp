#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve(){
  int n;
  cin>>n;
  long long sum = 0;
  vector<int> vec(n);
  for(int i = 0;i<n;i++){
    cin>>vec[i];
    sum+=abs(vec[i]);
  }

  int ans = 0;
  int negativeEle = 0;

  for(int i = 0;i<n;i++){
    if(vec[i]==0 && negativeEle==0){
      continue;
    }
    if(vec[i]<=0){
      negativeEle++;
    }
    else{
      if(negativeEle>0){
        ans++;
      }
      negativeEle = 0;
    }
  }
  if(negativeEle){
    ans++;
  }

  cout<<sum<<" "<<ans<<"\n";

}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}