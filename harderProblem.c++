#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    int ans = min(m,a)+min(m,b);
    cout<<min(2*m,ans+c)<<"\n";
  }
  return 0;
}