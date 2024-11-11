#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  vector<int> vec = {a,b,c};
  sort(vec.begin(),vec.end());
  int median = vec[1];
  int minDis = abs(vec[0]-median)+abs(vec[2]-median);
  cout<<minDis;
  return 0;
}



