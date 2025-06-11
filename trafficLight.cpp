#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
  ll n;
  cin>>n;
  char color;
  cin>>color;
  string trafficColors;
  cin>>trafficColors;
  trafficColors+=trafficColors;
  n*=2;
  ll lastGreenIndex = -1;
  ll maxSecond = INT_MIN;

  for(int i = n-1;i>=0;i--){
    if(trafficColors[i]=='g') lastGreenIndex = i;
    if(trafficColors[i]==color){
      ll diff = lastGreenIndex-i;
      maxSecond = max(maxSecond,diff);
    }
  }
  cout<<maxSecond<<"\n";
}
int main(){
  ll t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}