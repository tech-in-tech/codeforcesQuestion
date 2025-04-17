#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<long > vec(n);
  for(int i = 0;i<n;i++){
    cin>>vec[i];
  }
  map<long,long> mp;
  int i = 0,j =0;
  int ans =1;
  mp[vec[i]]++;
  while(j<(n-1)){
    j++;
    while(mp[vec[j]]>0){
      mp[vec[i]]--;
      i++;
    }
    mp[vec[j]]++;
    ans = max(ans,j-i+1);
  }
  cout<<ans<<"\n";


  return 0;
}