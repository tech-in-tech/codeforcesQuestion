#include<iostream>
using namespace std;
int fact(int num){
  if(num==0) return 1;
  int f = 1;
  for(int i = 1;i<=num;i++){
    f*=i;
  }
  return f;
}
void solve(){
  int numOfDig;
  cin>>numOfDig;
  for(int i = 0;i<numOfDig;i++){
    int x;
    cin>>x;
  }
  int digUsed = 10-numOfDig;
  int n = digUsed;
  int r = 2;
  cout<<(fact(n)/(fact(r)*fact(n-r)))*fact(4)/(fact(2)*fact(2))<<"\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}