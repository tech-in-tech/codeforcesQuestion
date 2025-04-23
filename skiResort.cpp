#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n,k,q;
  cin>>n>>k>>q;
  vector<long long> a(n);
  for(int i = 0;i<n;i++){
    cin>>a[i];
    if(a[i]>q) a[i] = 0;
    else{
      a[i] = 1;
    }
  }

  long long countOfOne = 0;
  long long ways = 0;
  for(int i = 0;i<n;i++){
    if(a[i]==1){
      countOfOne++;
    }
    else{
      if(countOfOne>=k){
        long long diff = countOfOne-k+1;
        ways+=(diff*(diff+1))/2;
      }
      countOfOne = 0;
    }
  }
  if(countOfOne>=k){
    long long diff = countOfOne-k+1;
    ways+=(diff*(diff+1))/2;
  }
  cout<<ways<<"\n";
}
int main(){
  long long t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}