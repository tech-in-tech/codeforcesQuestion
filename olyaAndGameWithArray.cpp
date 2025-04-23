#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve(){
  long long n;
  cin>>n;
  vector<long long> second_element;
  long long lowest_first_minium = INT_MAX;
  for(int i= 0;i<n;i++){
    long long m;
    cin>>m;
    vector<long long> a(m);
    for(auto &x:a){
      cin>>x;
    }
    sort(a.begin(),a.end());
    second_element.push_back(a[1]);
    lowest_first_minium = min(lowest_first_minium,a[0]);
  }

  sort(second_element.begin(),second_element.end());

  long long sum_of_second_element = accumulate(second_element.begin(),second_element.end(),0LL);
  long long lowest_second_minium = second_element[0];
  long long ans = lowest_first_minium+sum_of_second_element-lowest_second_minium;
  cout<<ans<<"\n";
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