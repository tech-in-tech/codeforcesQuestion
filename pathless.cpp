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
  int n,s;
  cin>>n>>s;
  int sm = 0;
  int cnt[3] = {0,0,0};
  for(int i = 0;i<n;i++){
    int x;
    cin>>x;
    sm+=x;
    cnt[x]++;
  }

  if(sm>s || s-sm==1){
    while(cnt[0]--) cout<<"0 ";
    while(cnt[2]--) cout<<"2 ";
    while(cnt[1]--) cout<<"1 ";
    cout<<"\n";
  }
  else{
    cout<<"-1\n";
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}