#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<vector<int>> vec(5, vector<int>(5));
  int r, c;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> vec[i][j];
      if (vec[i][j] == 1)
      {
        r = i, c = j;
      }
    }
  }
  int res = abs(2 - r) + abs(2 - c);
  cout << res;
  return 0;
}