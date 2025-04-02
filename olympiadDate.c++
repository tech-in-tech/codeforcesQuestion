#include <iostream>
#include <vector>
#include <algorithm> // for find()
using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> digits(n);

  for (int i = 0; i < n; i++)
  {
    cin >> digits[i];
  }
  vector<int> date = {0, 1, 0, 3, 2, 0, 2, 5};
  for (int i = 0;i<8;i++)
  {
    auto it = find(digits.begin(), digits.end(), date[i]);
    if (it != digits.end())
    {
      int dis = distance(digits.begin(), it);
      digits[dis] = -1;
      date[i] = -1;
    }
  }
  int c = count(date.begin(),date.end(),-1);
  int ans = 0;
  if(c==8){
    for(int i = n-1;i>=0;i--){
      if(digits[i]==-1) ans = i;
    }
  }
  else{
    ans = 0;
  }
  cout<<ans<<"\n";

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
