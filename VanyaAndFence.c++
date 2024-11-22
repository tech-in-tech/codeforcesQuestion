#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,h;
  cin>>n>>h;
  vector<int> persons(n);
  for(int i = 0;i<n;i++){
    cin>>persons[i];
  }
  int ans = 0;
  for(auto ele:persons){
    if(ele>h) ans+=2;
    else ans+=1;
  }
  cout<<ans<<"\n";

  return 0;
}