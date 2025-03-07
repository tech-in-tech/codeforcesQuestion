#include <iostream>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  cout<<(long long)(n/15)*3+min(n%15+1,3)<<"\n";
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
