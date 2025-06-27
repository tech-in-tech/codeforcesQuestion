#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a){
      cin>>x;
    }
    long long ans = 0;
    for(int i = 0;i<n-2;i++){
      for(int j = i+1;j<n-1;j++){
        auto it = lower_bound(a.begin(),a.end(),a[i]+a[j]);
        int end = it-(a.begin()+j+1);

        if(end==0) continue;

        it = upper_bound(a.begin()+j+1,a.begin()+j+end+1,a[n-1]-a[i]-a[j]);
         ans += (a.begin()+j+end+1)-it;

      }
    }

cout<<ans<<"\n";
  }
  return 0;
}