#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
  vector<int> vec;
  string s;
  cin >> s;
  for (auto ele : s)
  {
    if (ele != '+')
    {
      int num = ele - '0';
      vec.push_back(num);
    }
  }
  sort(vec.begin(), vec.end());
  string ans = "";
  for(auto ele:vec){
    ans+=to_string(ele);
    ans+="+";
  }
  ans.pop_back();
  cout<<ans;
  return 0;
}
