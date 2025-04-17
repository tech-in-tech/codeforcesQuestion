#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  long long n,p;
  cin>>n>>p;
  vector<long long> a(n),b(n);
  for(long long i = 0;i<n;i++){
    cin>>a[i];
  }
  for(long long i = 0;i<n;i++){
    cin>>b[i];
  }
  vector<pair<long long,long long>> v(n);
  for(long long i = 0;i<n;i++){
    v[i] ={b[i],a[i]};
  }
  sort(v.begin(),v.end());
  long long minCost = p;
  long long shared = 1;

  for(auto it:v){
    long long canBeShared = it.second;
    long long sharedCost = it.first;

    if(sharedCost>=p){
      break;
    }
    if(shared+canBeShared>n){
      minCost+=(n-shared)*sharedCost;
      shared=n;
      break;
    }
    else{
      minCost += canBeShared*sharedCost;
      shared += canBeShared;
    }
  }
  minCost+=(n-shared)*p;
  cout<<minCost<<"\n";
}
int main(){
  long long t;
  cin>>t;
  while (t--)
  {
    solve();
  }
  
  return 0;
}