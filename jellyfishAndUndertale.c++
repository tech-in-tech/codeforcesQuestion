#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve()
{
  long long a, b, n;
  cin >> a >> b >> n;
  vector < long long> arr(n);
  for(long long i = 0;i<n;i++){
    cin>>arr[i];
  }
  long long min_time = b;
  for(int i = 0;i<n;i++){
    min_time+=min(arr[i],a-1);
  }
  cout<<min_time<<"\n";
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

// m = 3+1+1+4
