#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  int maxIncreasingSubarray = 1, currLen = 1;
  for (int i = 0; i < n-1; i++)
  {
    if(vec[i+1]>vec[i]){
      currLen++;
    } 
    else{
      currLen = 1;
    }
    if(maxIncreasingSubarray<currLen) maxIncreasingSubarray = currLen;
  }
  cout << maxIncreasingSubarray << "\n";
  return 0;
}
