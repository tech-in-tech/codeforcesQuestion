#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<char>> grid(n, vector<char>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (i % 2 == 0)
      {
        // Fill even rows entirely with '#'
        grid[i][j] = '#';
      }
      else
      {
        // Odd rows have patterns
        if (i % 4 == 1 && j == m - 1)
        {
          // Place '#' at the last column for rows 1, 5, 9, etc.
          grid[i][j] = '#';
        }
        else if (i % 4 == 3 && j == 0)
        {
          // Place '#' at the first column for rows 3, 7, 11, etc.
          grid[i][j] = '#';
        }
        else
        {
          // Fill remaining cells in odd rows with '.'
          grid[i][j] = '.';
        }
      }
    }
  }
  // Output the grid
  for (auto &row : grid)
  {
    for (auto cell : row)
    {
      cout << cell;
    }
    cout << "\n";
  }

  return 0;
}
