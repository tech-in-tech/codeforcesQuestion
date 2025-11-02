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
  ll a,b,c,f,s;
  cin>>a>>b>>c;
  f=s=-1;
  if(a<c) f = 1;
  if(b*a>c) s = b;
  cout<<f<<" "<<s<<"\n";


}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}