#include<iostream>
#include<vector>
using namespace std;
void solve(){
  int n;
  cin>>n;
  int zero = 0;
  int one = 0;
  for(int i = 0;i<2*n;i++){
    int x;
    cin>>x;
    zero += (x==0);
    one += (x==1);
  }  
  cout<<one%2<<" "<<min(one,zero)<<"\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}