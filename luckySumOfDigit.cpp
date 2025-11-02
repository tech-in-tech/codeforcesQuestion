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
  int n;
  cin >> n;
  string s = "";
  while (n > 0 && n % 7 != 0)
  {
    n -= 4;
    s.push_back('4');
  }
  while (n > 0 && n % 7 == 0)
  {
    n -= 7;
    s.push_back('7');
  }
  if (n == 0)
  {
    cout << s;
    return;
  }
  cout << -1;
}

int main()
{

  solve();

  return 0;
}