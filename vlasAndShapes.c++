#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    set<int> size;
    for (int i = 0; i < n; i++)
    {
      string s; cin>>s; int sz = 0;
      for (auto &i:s) sz+=(i=='1');
      if(sz) size.insert(sz);
    }
    cout<<(size.size()>1?"TRIANGLE":"SQUARE")<<"\n";
    

  }
  return 0;
}
