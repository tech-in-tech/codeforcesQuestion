#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int helper(int num)
{
  string numToString = to_string(num);
  for (auto ele : numToString)
  {
    if (ele != '7' and ele != '4')
    {
      return false;
    }
  }
  return true;
}
int main()
{
  int num;
  cin>>num;
  helper(num)?cout<<"YES":cout<<"NO";
  return 0;
}

   