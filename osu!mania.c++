#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<vector<char>> vec(n, vector<char>(4));

    // Input the 2D vector of characters
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        cin >> vec[i][j];
      }
    }

    vector<int> ans;

    // Traverse the 2D vector from bottom to top
    for (int i = vec.size() - 1; i >= 0; i--)
    {
      for (int j = 0; j < 4; j++) // Proper bounds for `j`
      {
        if (vec[i][j] == '#')
        {
          ans.push_back(j + 1); // Add 1 to convert 0-based index to 1-based
        }
      }
    }

    for (auto ele : ans)
    {
      cout << ele << " ";
    }
    cout << "\n";
  }
  return 0;
}
