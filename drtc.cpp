#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
void solve()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  vector<string> v(n);
  for(int i = 0;i<n;i++){
    string flip = s;
    if(flip[i]=='0') flip[i] = '1';
    else flip[i] = flip[i] = '0';
    v[i] = flip;
  }
  int ans = 0;
  for(auto ele:v){
    for(auto e:ele){
      if(e=='1') ans++;
    }
  }

  cout<<ans<<"\n";
  

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

