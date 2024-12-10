#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool check(string &s)
{
  for (int i = 1; i < s.size(); i++)
  {
    if (s[i] != s[i - 1])
    {
      swap(s[i], s[i - 1]);
      return true;
    }
  }
  return false;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin>>s;
    if(check(s)){
      cout<<"YES\n"<<s<<"\n";
    }
    else{
      cout<<"NO\n";
    }
  }
  return 0;
}
