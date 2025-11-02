#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

// Short types
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

// Common macros
#define pb push_back
#define po pop_back
#define ff first
#define ss second

void solve(){
  string p,h;
  cin>>p>>h;
  sort(p.begin(),p.end());
  int left = 0;
  for(int right = p.size()-1;right<h.size();right++){
    string newH = h.substr(left, right - left + 1);
    sort(newH.begin(), newH.end());
    if(newH==p){
      cout<<"YES\n";
      return;
    }
    left++;
  }
  cout<<"NO\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}