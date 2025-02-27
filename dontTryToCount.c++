#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  string x, s;
  cin >> x >> s;
  int c = 6;
  int op= 0;
  int res  = 0;
  while(c--){
    if (x.find(s) != string::npos)
    {
      op = 1;
      break;
    }
    res++;
    x+=x;
  }
  
  if(op==1) cout<<res<<"\n";
  else{
    cout<<-1<<"\n";
  }
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