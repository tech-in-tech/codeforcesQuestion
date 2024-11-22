#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> vec(n);
  for(int i = 0;i<n;i++){
    cin>>vec[i];
  }
  string ans = "Easy";
  for(auto ele: vec){
    if(ele==1){
      ans = "Hard";
      break;
    }
  }
  cout<<ans<<"\n";
  
  return 0;
}