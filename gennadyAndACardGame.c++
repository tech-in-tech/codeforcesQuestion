#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  string cardOnTable;
  cin >> cardOnTable;
  vector<string> cardsInHand(5);
  for (int i = 0; i < 5; i++)
  {
    cin >> cardsInHand[i];
  }
  char suit = cardOnTable[0];
  char rank = cardOnTable[1];
  for (int i = 0; i < 5; i++)
  {
    if (suit == cardsInHand[i][0] or rank == cardsInHand[i][1])
    {
      cout << "YES\n";
      return 0;
    }
  }
  cout<<"NO\n";
  return 0;
}