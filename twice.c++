#include <iostream>
#include <unordered_map>
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
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
      cin >> nums[i];
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
      mp[nums[i]]++; // Count frequencies
    }
    int ans = 0;
    for (auto &ele : mp)
    {
      ans += ele.second / 2; 
    }
    cout << ans << "\n";
  }
  return 0;
}




