#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> rating(n);
  for (int i = 0; i < n; i++)
  {
    cin >> rating[i];
  }

  bool f = true;
  vector<int> ans;
  for (auto ele : rating)
  {
    // for even
    if (ele % 2 == 0)
    {
      ans.push_back(ele / 2);
    }
// for odd
    else
    {
      if (f)
      {
        ans.push_back(ceil((double)ele / 2));
        f = false;
      }
      else if (!f)
      {
        ans.push_back(floor((double)ele / 2));
        f = true;
      }
    }
  }

  for(auto ele:ans){
    cout<<ele<<"\n";
  }
}

int main()
{
  solve();
  return 0;
}

/*

7
-7 = -3.5
-29 = -14.5
0 = 0
3 = 1.5
24 = 12
-29 = -14.5
38 = 19
*/