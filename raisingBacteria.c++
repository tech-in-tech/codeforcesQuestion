#include<iostream>
using namespace std;
int main(){
  int x;
  cin>>x;
  cout<<__builtin_popcount(x)<<"\n";
  return 0;
}

// __builtin_popcount(x) used to count the nuber of setbits  