#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// Short types
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

// Common macros
#define pb push_back
#define po pop_back
#define ff first
#define ss second

void solve()
{
  int n, c;
  cin >> n >> c;
  vector<ll> v;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  sort(v.begin(), v.end(), greater<ll>());
  int minc = n;
  for (int i = 0; i <= n; ++i)
  {
    int coins = 0;
    for (int j = 0; j < n; ++j)
    {
      ll weight = j;
      int doublings = max(0, j - i);
      while (doublings--)
      {
        weight *= 2;
        if (weight > c)
          break;
      }
      if (weight > c)
        coins++;
    }
    minc = min(minc, coins);
  }

  cout<<minc<<"\n";
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