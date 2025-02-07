#include <iostream>
#include <vector>
#include <cmath> // No need for <bits/stdc++.h>
using namespace std;

int main()
{
  // Using Sieve of Eratosthenes
  int n;
  cin >> n;
  vector<bool> vec(n + 1, true);
  vec[0] = vec[1] = false;

  for (int i = 2; i * i <= n; i++)
  {
    if (vec[i])
    {
      for (int j = i * i; j <= n; j += i)
      {
        vec[j] = false;
      }
    }
  }

  // Collect prime numbers
  vector<int> prime;
  for (int i = 2; i <= n; i++)
  { // ✅ Fix indexing
    if (vec[i])
    {
      prime.push_back(i);
    }
  }

  // Two-pointer approach to find two prime numbers summing to `n`
  int left = 0, right = prime.size() - 1;
  bool found = false;
  int ans1 = -1, ans2 = -1;

  while (left < right)
  {
    int sum = prime[left] + prime[right];
    if (sum == n)
    {
      ans1 = prime[left];
      ans2 = prime[right];
      found = true;
      break; 
    }
    else if (sum < n)
    {
      left++;
    }
    else
    {
      right--;
    }
  }

  if (found)
  {
    cout << ans1 << " " << ans2 << "\n";
  }
  else
  {
    cout << -1 << "\n";
  }

  return 0;
}
