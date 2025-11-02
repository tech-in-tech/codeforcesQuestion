#include <bits/stdc++.h>
using namespace std;

// Short types
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

// Macros
#define pb push_back
#define ff first
#define ss second

void solve()
{
  int k;
  cin >> k;
  string s;
  cin >> s;

  vector<int> v(26,0);
  for(auto &c:s) v[c-'a']++;
  string res = "";

  for(int i = 0;i<26;i++){
    if(v[i]%k!=0){
      cout<<"-1\n";
      return;
    }

    else{
      int times = v[i]/k;
      while(times--) res.push_back('a'+i);
    }
  }

  string old = res;
  while(--k){
    res+=old;
  }

  cout<<res<<"\n";
}

int main()
{
  solve();
  return 0;
}
