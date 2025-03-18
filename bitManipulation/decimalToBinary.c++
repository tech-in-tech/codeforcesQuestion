// decimal to binary
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string decomalToBinary(int num)
{
  string ans = "";
  while (num)
  {
    int rem = num % 2;
    ans += to_string(rem);
    num = num / 2;
  }
  reverse(ans.begin(), ans.end());
  return ans;
}
// 23
int main()
{
  int num;
  cin >> num;
  cout << decomalToBinary(num);
  return 0;
}