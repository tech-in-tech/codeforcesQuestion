#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int l,r;
    cin>>l>>r;
    int ans = 0;
    if(l==1 and r==1){
      ans = 1;
    } 
    else{
      ans = r-l;
    }
  cout<<ans<<"\n";
  }
  return 0;
}