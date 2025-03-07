#include <iostream>
#include <unordered_map>
using namespace std;

void solve()
{
  long long n, x, k;
  cin >> n >> x >> k;
  string dir;
  cin >> dir;

  long long countZero = 0;
  unordered_map<long long, long long> seen; // Stores when we last visited a position

  for (long long time = 0; time < k;)
  {
    if (seen.count(x))
    { // If we have been at x before, cycle detected
      long long cycle_length = time - seen[x];
      long long cycles_remaining = (k - time) / cycle_length;
      countZero += countZero * cycles_remaining;
      break;
    }
    seen[x] = time;

    for (char move : dir)
    {
      if (move == 'L')
        x--;
      if (move == 'R')
        x++;

      if (x == 0)
        countZero++;

      time++;
      if (time >= k)
        break;
    }

    if (x != 0)
      break; // Stop if we don't reset
  }

  cout << countZero << "\n";
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
