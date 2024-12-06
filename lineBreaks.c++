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
    int n, m;
    cin >> n >> m;
    vector<string> vec(n);
    for (int i = 0; i < n; i++)
    {
      cin >> vec[i];
    }
    vector<int> size; 
    for (int i = 0; i < n; i++)
    {
      size.push_back(vec[i].size()); 
    }
    int sum = 0;
    int ans = 0;
    for(auto ele:size){
      sum +=ele;
      if(sum<=m){
        ans++;
      }
    }
    cout<<ans<<"\n";
  }
  return 0;
}
