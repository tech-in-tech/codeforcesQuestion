#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(string s)
{
  int n = s.size();
  int ans = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    if(s[i]=='1'){
      ans+=pow(2,(n-(i+1)));
    }
  }
  return ans;
}
int main()
{
  string n;
  cin >> n;
  cout << binaryToDecimal(n);
  return 0;
}