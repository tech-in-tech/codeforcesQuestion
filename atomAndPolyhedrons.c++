#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int ans = 0;
  vector<string> polygons(n);
  for (int i = 0; i < n; i++)
  {
    cin >> polygons[i];
  }
  for(auto polygon:polygons){
    if (polygon == "Tetrahedron")
    {
      ans+=4;
    }
    else if (polygon == "Cube")
    {
      ans+=6;
    }
    else if (polygon == "Octahedron")
    {
      ans+=8;
    }
    else if (polygon == "Dodecahedron")
    {
      ans+=12;
    }
    else
    {
      ans+=20;
    }
  }
  cout<<ans;

  return 0;
}