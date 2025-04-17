#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  int countZero = count(s.begin(), s.end(), '0');
  int countOne = count(s.begin(), s.end(), '1');
  int breakPoint = s.size();
  for(int i = 0;i<s.size();i++){
    if(s[i]=='1') countZero--;
    else countOne--;
    if(countZero<0 || countOne<0){
      breakPoint = i;
      break;
    }
  }
  cout<<s.size()-breakPoint<<"\n";
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}