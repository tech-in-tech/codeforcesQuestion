#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> vec(n);
  for (int i = 0; i < vec.size(); i++)
  {
    cin >> vec[i];
  }

  int kthFinisherScore = vec[k - 1];
  int ans = 0;
  for (auto ele : vec)
  {
    if (ele > 0 && ele >= kthFinisherScore)
    {
      ans += 1;
    }
  }
  cout << ans;
  return 0;
}
