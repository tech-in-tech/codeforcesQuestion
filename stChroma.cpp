#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, x;
    cin >> n >> x;
    vector<int> result;

    // 1. Add all numbers from x+1 to n-1
    for (int i = x + 1; i < n; ++i)
      result.push_back(i);

    // 2. Add x if it's in range [0, n-1]
    if (x < n)
      result.push_back(x);

    // 3. Add numbers 0 to x-1
    for (int i = 0; i < x; ++i)
      result.push_back(i);

    // Output the permutation
    for (int i = 0; i < n; ++i)
      cout << result[i] << " ";
    cout << "\n";
  }

  return 0;
}
