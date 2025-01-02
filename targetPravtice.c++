#include <iostream>
#include <vector>
using namespace std;

void solve()
{
  vector<vector<char>> grid(10, vector<char>(10)); // Change grid to store characters
  vector<vector<int>> board = {
      {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
      {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
      {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
      {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
      {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
      {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
      {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
      {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
      {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
      {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

  int ans = 0;
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      cin >> grid[i][j]; 
    }
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (grid[i][j] == 'X')
      { 
        ans += board[i][j];
      }
    }
  }

  cout << ans << "\n";
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
