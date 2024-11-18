#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++)
    {
      int l, r;
      cin >> l >> r;
      vec[i] = {l, r};
    }
    int mx = vec[0].first;
    for (int i = 1; i < n; i++)
    {
      mx = max(mx, vec[i].first - vec[i - 1].second);
    }
    mx = max(mx, m - vec[n - 1].second);
    if (mx >= s)
      cout << "YES\n";
    else
    {
      cout << "NO\n";
    }
  }
  return 0;
}

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      mp[a[i]]++;
    }

    int maxScore = 0;

    for (auto &entry : mp)
    {
      maxScore += entry.second / 2;
    }

    cout << maxScore << endl;
  }

  return 0;
}