#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  long long n,k;
  cin>>n>>k;
  vector<long long> a(n);
  for(long long i = 0;i<n;i++){
    cin>>a[i];
  }
  long long ans = LLONG_MAX;
  long long evenCount = 0;
  for(long long i = 0;i<n;i++){
    if(a[i]%2==0) evenCount++;
    if(a[i]%k==0) ans = 0;
    else{

      ans = min(ans,k-a[i]%k);
    }
  }
  if(k==4){
   if(evenCount>=2) ans=0;
   else if(evenCount==1) ans =min(ans,1LL);
   else ans =min(ans,2LL);
  }
  cout<<ans<<"\n";
}
int main(){
  long long t;
  cin>>t;
  while(t--){
     solve();
  }
  return 0;
}