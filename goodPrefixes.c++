#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,ans = 0,sum = 0, prev = 0,mx = 0;
    cin>>n;
    vector<long long> vec(n);
    for(long long j = 0;j<n;j++){
      cin>>vec[j];
    }
    for(long long j = 0;j<n;j++){
      mx = max(mx,vec[j]);
      sum+=vec[j];
      if(mx==sum-mx) ans++;
    }
    cout<<ans<<endl;
  }
  return 0;
}