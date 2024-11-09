#include<iostream>
using namespace std;
int main(){
  int k,n,w;
  cin>>k>>n>>w;
  int totalCost = 0;
  while(w){
    totalCost+=w*k;
    w--;
  }
  if(n>=totalCost){
    cout<<0;
  }
  else{
  cout<<abs(totalCost-n);
  }
  return 0;
}
// 1 = 1*3 = 3  w = 4
// 2 = 2*3 = 6
// 3 = 3*3 = 9
// 4 = 4*3 = 12
// totla = 30

// 1 = 1*4 = 4
// 2 = 2*4 = 8
// 3 = 3*4 = 12
// 4 = 4*4 = 16
// 5 = 5*4 = 20
// 6 = 6*4 = 24