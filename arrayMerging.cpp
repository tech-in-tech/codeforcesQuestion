#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
void solve()
{
  ll n;
  cin >> n;
  vector<ll> a(n),b(n);
  for(ll i = 0;i<n;i++){
    cin>>a[i];
  }
  for(ll i = 0;i<n;i++){
    cin>>b[i];
  }
  vector<ll> longestSubarrayA(2*n+1,0);
  vector<ll> longestSubarrayB(2*n+1,0);

  ll counter = 1;
  for(int i = 1;i<n;i++){
    if(a[i]==a[i-1]) counter++;
    else{
      longestSubarrayA[a[i-1]] = max(longestSubarrayA[a[i-1]],counter);
      counter = 1;
    }
  }
  longestSubarrayA[a[n-1]] = max(longestSubarrayA[a[n-1]],counter);
  counter = 1;


  for(int i = 1;i<n;i++){
    if(b[i]==b[i-1]) counter++;
    else{
      longestSubarrayB[b[i-1]] = max(longestSubarrayB[b[i-1]],counter);
      counter = 1;
    }
  }
  longestSubarrayB[b[n-1]] = max(longestSubarrayB[b[n-1]],counter);
  

  ll maxFreq = -1;
  for(int i = 1;i<=2*n;i++){
    maxFreq = max(maxFreq,longestSubarrayA[i]+longestSubarrayB[i]);
  }
  cout<<maxFreq<<"\n";

}
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}