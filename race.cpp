#include <iostream>
using namespace std;

void solve()
{
  int a, x, y;
  cin >> a >> x >> y;
  if(min(x,y)<=a && max(x,y)>=a){
    cout<<"NO\n";
  }
  else cout<<"YES\n";
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