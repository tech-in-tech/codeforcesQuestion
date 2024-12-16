#include <iostream>
#include <string>
#include <vector>
using namespace std;
string convertTo12Hour(string time24)
{
  int hh = stoi(time24.substr(0, 2));
  string mm = time24.substr(3, 2);
  string period = (hh >= 12) ? "PM" : "AM";

  if (hh == 0)
  {
    hh = 12;
  }
  else if (hh > 12)
  {
    hh -= 12;
  }

  string hh12 = (hh < 10) ? "0" + to_string(hh) : to_string(hh);

  return hh12 + ":" + mm + " " + period;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string time24;
    cin >> time24;
    cout << convertTo12Hour(time24) << "\n";
  }
  return 0;
}


