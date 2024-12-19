#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    vector<char> grid(9);
    for (int i = 0; i < 9; i++)
    {
      cin >> grid[i];
    }
    unordered_map<char,int> mp;
    for(auto ele:grid){
      mp[ele]++;
    }
    for(auto ele:mp){
      if(ele.second==2) cout<<ele.first<<"\n";
    }
  
  }
  return 0;
}


