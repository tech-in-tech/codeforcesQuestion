#include<iostream>
#include<vector>
using namespace std;
const int N= 2e5+1; 
int g(int x){
  int res = 0;
  while(x){
    res+=x%10;
    x/=10;
  }
  return res;
}
int main(){
  vector<int> f(N);
  for(int i = 1;i<N;i++){
    f[i] = f[i-1]+g(i);
  }
  int t;
  cin>>t;
  while(t--){
    int n; cin>>n;
    cout<<f[n]<<"\n";
  }
  return 0;
}