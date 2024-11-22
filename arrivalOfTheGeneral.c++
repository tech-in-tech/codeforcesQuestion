#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> vec(n);

  // Input the vector
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }

  // Initialize variables
  int maxNum = INT_MIN, maxIdx = 0;
  int minNum = INT_MAX, minIdx = 0;

  for (int i = 0; i < n; i++)
  {
    if (vec[i] <= minNum)
    {
      minNum = vec[i];
      minIdx = i;
    }
    if (vec[i] > maxNum)
    {
      maxNum = vec[i];
      maxIdx = i;
    }
  }

  if (vec[0] == maxNum && vec[n - 1] == minNum)
  {
    cout << 0 << endl;
    return 0;
  }

  int swaps = 0;

  swaps += maxIdx;

  if (minIdx < maxIdx)
  {
    swaps += (n - 1 - minIdx - 1);
  }
  else
  {
    swaps += (n - 1 - minIdx);
  }

  cout << swaps << endl;
  return 0;
}
