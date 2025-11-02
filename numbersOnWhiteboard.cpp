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
#define bk back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (b); i--)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ld PI = acos(-1.0);

void solve(){
  int n;
  cin>>n;
  vi v;
  rep(i,1,n+1){
    v.pb(i);
  }
  vi res;
  while(sz(v)>1){
    int s = v.size();
    int sum = v[s-1]+v[s-2];
    res.pb(v[s-1]);
    res.pb(v[s-2]);
    v.po();
    v.po();

    if(sum%2==1){
      v.pb(sum/2+1);
    }

    else{
      v.pb(sum/2);
    }
  }
  cout<<v.bk()<<"\n";
  for(int i = 0;i<res.size();i+=2){
    cout<<res[i]<<" "<<res[i+1]<<"\n";
  }
}


/* 1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1 */



int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}