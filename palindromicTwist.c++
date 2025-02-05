#include<iostream>
using namespace std;
void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int i,j;
  i = 0;j = n-1;
  while(i<j){
    if(s[i]!=s[j]){
      int diff = abs(s[i]-s[j]);
      if(diff!=2){
        cout<<"NO"<<"\n";
        return;
      }
    }
    i++;
    j--;
  }
  cout<<"YES\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}