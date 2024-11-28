#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> vec(n);
    int odd = 0, even = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> vec[i];
      sum += vec[i];
      if (vec[i] % 2)
        odd++;
      else
        even++;
    }
    if (sum % 2)
      cout << "YES\n";
    else
    {
      if (odd >= 1 and even >= 1)
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }
  return 0;
}