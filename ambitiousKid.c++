#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  int target = 0;
  auto it = find(v.begin(), v.end(), target);
  int minDiff = INT_MAX;
  if(it!=v.end()){
    cout<<0<<"\n";
  }

  else{
    for(int i = 0;i<n;i++){
      minDiff = min(minDiff,abs(0-v[i]));
    }
    cout<<minDiff<<"\n";
  }

  
  return 0;
}