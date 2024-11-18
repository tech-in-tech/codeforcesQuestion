#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int k;
    cin >> k;
    vector<int> vec(k);
    for (int i = 0; i < k; i++)
    {
      cin >> vec[i];
    }
    int n, m;
    n = vec.size() / 3;
    m = 3;
    cout << n <<" "<< m << "\n";
  }
  return 0;
}

